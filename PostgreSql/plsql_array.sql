-- for each loop pgplsql
do $$
declare
    arr varchar[] := '{val1,val2}';
    i varchar;
begin
    raise notice 'Initiated %',arr;
    foreach i in array arr
    loop
	    raise notice 'counter: %', i;
    end loop;

end $$;
