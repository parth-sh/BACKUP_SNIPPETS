0. Earlier steps
```sql
DECLARE
  v_col_exists NUMBER;
BEGIN
 
  SELECT COUNT(*)
  INTO v_col_exists
  FROM all_tab_columns
  WHERE table_name='TFT559PROCEDURE' AND column_name='ID_ASSIGNMENT';
  IF v_col_exists = 0 THEN
    EXECUTE IMMEDIATE 'ALTER TABLE TFT559PROCEDURE ADD ID_ASSIGNMENT NUMERIC(20, 0)';
    dbms_output.put_line('ID_ASSIGNMENT column added to TFT559PROCEDURE table');
  ELSE
    dbms_output.put_line('ID_ASSIGNMENT column already exists in TFT559PROCEDURE table');
  END IF;
END;

-- DECLARE
--   v_tab_exists NUMBER;
-- BEGIN
--   SELECT COUNT(*)
--   INTO v_tab_exists
--   FROM all_tab_columns
--   WHERE owner='&&WMIS_SCHEMA_OWNER.' AND table_name='PROCEDURES';
--   IF v_tab_exists = 0 THEN
--     EXECUTE IMMEDIATE '
--       CREATE TABLE "PROCEDURES" (
--         "CODE" nvarchar(10) NOT NULL,
--         "PROCEDURE_TYPE" nvarchar(10) NULL,
--         "PROCEDURE_CATEGORY" nvarchar(1) NOT NULL,
--         "DESCRIPTION" nvarchar(100) NULL,
--         "INACTIVATION_DATE" numeric(20,0) NULL,
--         "ACTIVATION_DATE" numeric(20,0) NULL,
--         "RFST_SURVEY_AREA_TYPE" nvarchar(10) NULL,
--         "RFWR_WORK_REQ_TYPE" nvarchar(10) NOT NULL,
--         "RFWS_WORK_REQ_SUBTYPE" nvarchar(30) NULL,
--         "FLTY_FACILITY_TYPE" nvarchar(10) NULL,
--         "COMPONENT_ONLY_YN" char(1) NULL,
--         "RCOT_CONDITION_TYPE" nvarchar(5) NULL,
--         "INITIAL_INSPECTION_YN" char(1) NULL,
--         "MAINTENANCE_YN" char(1) NOT NULL,
--         "MISSING_MANDATORY_CHARS" varchar(1) NOT NULL,
--               "GEN_WR_ON_NEW_COND_YN" char(1) NULL,
--         "RECORD_TIMESTAMP" numeric(20,0) NOT NULL,
--         "ID_ASSIGNMENT" numeric(10,0) NULL,
--         PRIMARY KEY ( "CODE" )
--       ) IN "asset_data_dbspace";
--     ';
--     dbms_output.put_line('PROCEDURES table added');
--   ELSE
--     dbms_output.put_line('PROCEDURES table already exists');
--   END IF;
-- END
```