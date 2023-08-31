-- https://gist.github.com/devodo/8b39748d65e8185fbd89

CREATE OR REPLACE FUNCTION max (uuid, uuid)
RETURNS uuid AS $$
BEGIN
	IF $1 IS NULL OR $1 < $2 THEN
		RETURN $2;
	END IF;

	RETURN $1;
END;
$$ LANGUAGE plpgsql;


CREATE AGGREGATE max (uuid)
(
    sfunc = max,
    stype = uuid
);


-- https://www.sqlshack.com/different-ways-to-sql-delete-duplicate-rows-from-a-sql-table/

SELECT MAX (id) FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id;
SELECT vendor_id, deal_brand_id, count(*) AS CNT FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id;

SELECT count(*) AS CNT FROM deal_configurations WHERE aasm_state='active';

SELECT SUM(CNT) FROM (
    SELECT count(*) AS CNT FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id
) src;

SELECT vendor_id, deal_brand_id, count(*) AS CNT FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id;

SELECT vendor_id, deal_brand_id FROM deal_configurations WHERE aasm_state='active' AND id NOT IN (
    SELECT MAX (id) FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id
    );

DELETE FROM deal_configurations WHERE aasm_state='active' AND id NOT IN (
    SELECT MAX (id) FROM deal_configurations WHERE aasm_state='active' GROUP BY vendor_id, deal_brand_id
);
