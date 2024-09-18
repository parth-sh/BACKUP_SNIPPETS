PROCEDURE FILTER .java not having work group filter, if issue come has to be implemented similar to ProcedureCodeFilter

Document FM1 production deployment


Check for WorkGroup.createInstance() 
and usage in WorkDetailTabPresentation.java at line number 1452
it replaced our code, for filtering WORK_GROUP in Work_groupLogic.java getWorkGroupList

Try to use this type of Filter with pickListDefinition and try to remove code from FWSBussinesslogic file