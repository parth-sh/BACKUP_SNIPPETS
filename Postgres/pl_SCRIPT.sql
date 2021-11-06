
create or replace function rectify_cashback_wallet() returns double precision as
$$
declare
	curr cursor for SELECT * FROM wallet_transactions WHERE wallet_id = (SELECT id FROM wallets WHERE type='BuyerCashbackWallet') ORDER BY created_at ASC, transacted_on ASC;
	recc wallet_transactions%rowtype;
	correct_wallet_balance double precision := 0;
begin
	open curr;
	loop
		fetch curr into recc;
		exit when not found;
	
		if recc.type = 'CreditWalletTransaction'	 then
			raise notice 'CreditWalletTransaction';	
			correct_wallet_balance := correct_wallet_balance + recc.transaction_amount;
		elsif recc.type = 'DebitWalletTransaction' then
			raise notice 'DebitWalletTransaction';
			correct_wallet_balance := correct_wallet_balance - recc.transaction_amount;
		end if;
	
		raise notice '%',recc.id;
		
		raise notice 'Updating record';
		UPDATE wallet_transactions SET wallet_balance = correct_wallet_balance WHERE id=recc.id;
		
	end loop;
	close curr;
	return correct_wallet_balance;
end;

$$ language 'plpgsql';

SELECT rectify_cashback_wallet();

DROP FUNCTION rectify_cashback_wallet();
