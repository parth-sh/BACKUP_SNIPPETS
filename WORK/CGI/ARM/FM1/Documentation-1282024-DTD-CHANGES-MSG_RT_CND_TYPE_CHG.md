0. After DTD changes from DTD team


1. Following this
[Friday 8:28 PM] Sinha, Ritul
http://lutl-armutilit.ams.com/redmine/projects/armmobileproject/wiki/MessagesDTD_change_process
 
[Friday 8:28 PM] Sinha, Ritul
These steps we need to do
 
[Friday 8:29 PM] Sinha, Ritul
3rd section in this URL 
RDCS messages - CC/Asset Manager messages¶

```sql
SELECT * FROM TFCMSGCOLUMN420 WHERE NM_MESSAGE = 'MSG_RT_CND_TYPE_CHG';
SELECT * FROM TFCMSGTABLE421 WHERE NM_MESSAGE = 'MSG_RT_CND_TYPE_CHG';

INSERT INTO TFCMSGCOLUMN420 
  (NM_MESSAGE, NM_TAG, NM_COLUMN, IND_IS_PK, NM_ASSOC_TABLE, NM_ASSOC_COLUMN, NM_TRANSFORMER_CLASS)
VALUES 
  ('MSG_RT_CND_TYPE_CHG', 'ASSIGN_ID', 'IS_ASSIGNED_TO_ASSIGNMENT', 0, 'ASSIGNMENT', 'ID_ASSIGNMENT', null);
```



2. Still our data was not populating with runBaseline_with specific to one msg.bat

*Note:
```bat
[7:32 PM] Sharma, Parth
set BL_ARGS=-F baseline.properties -L testM.log -M MSG_RT_CND_TYPE_CHG

remove rem from front, which will enable this line
```



3. After thorough research we find that REF_CONDITION_TYPES.ID_ASSIGNMENT column is missing and 
Mobile tables is also missing TFT897CONDTYPES.ID_O_ASSIGNMENT, TFV897CONDTYPES.ID_O_ASSIGNMENT columns

```sql
ALTER TABLE REF_CONDITION_TYPES ADD ID_ASSIGNMENT NUMERIC(20, 0);
 
ALTER TABLE TFT897CONDTYPES ADD ID_O_ASSIGNMENT NUMERIC(20, 0);

ALTER TABLE TFV897CONDTYPES ADD ID_O_ASSIGNMENT NUMERIC(20, 0);
```



4. Repeat Step 2



5. After running BaselineServiceTest.java(asked ritul). We got to know that view VFV897CONDTYPES is bieng used in code and was missing ID_O_ASSIGNMENT



6. To create the view VFV897CONDTYPES 
ritul suggested to run 

DB Modeller > Create Server DDL

```log
DEBUG com.stsjava.fieldit.devtools.SQLPrint.DOM2PLSQLUser - Destination directory:C:\Users\parth.sharma\Desktop\ARM\wam-fieldmanager\devtools\db_modeller\..\model_gen\src\main\resources\..\..\model\resources\RTARM2.2.0\plsql_interfaces
19:37:40.173 [AWT-EventQueue-0] DEBUG com.stsjava.fieldit.devtools.SQLPrint.DOM2PLSQLUser - Destination output Format:PLSQL
```



7. From here we got 
devtools\model_gen\src\model\resources\RTARM2.2.0\DDL\ft_full.ddl
```sql
CREATE OR REPLACE VIEW &Table_Owner..VFV897CONDTYPES AS
```



8. But after running this our Triggers were missing in sqldeveloper
That were present in 
devtools\model_gen\src\model\resources\RTARM2.2.0\DDL\ft_full_triggers.ddl
```sql
PROMPT creating trigger Ist897CONDTYPES_B4ins
 
PROMPT creating trigger Ist897CONDTYPES_B4UP
 
PROMPT creating trigger Ist897CONDTYPES_B4del 
```



9. Now repeated Step 2, data is populating



10. Now Run [Baseline](.\Baseline.md)


//////////////////////////////////////////////////////////////////////////////////////////////////////////////



Further changes 13082024



11. After running full baseline, we found data is not populating in 
SELECT * FROM "DBA"."TFT897CONDTYPES" WHERE id_o_assignment IS NOT NULL;

12. We have inserted wrong column in REF_CONDITION_TYPES, Assignment_ID is already present but we have added ID_ASSIGNMENT (Ritul notified)
```sql
ALTER TABLE REF_CONDITION_TYPES DROP COLUMN ID_ASSIGNMENT;
```

13. Now ran all things related to Condition Types in 
ft_full_triggers.ddl
ft_full.ddl

14. Than ran full baseline which populated amobile.db, triggers populated the ITAGL databases

15. In summary 
open db_modeller, do the changes

Click Create Server DDL

Do the changes in ft_full_triggers.ddl, ft_full.ddl

Run and check