### : Write a PL/SQL block to print the total number of employees from the employees table.
```sql
    DECLARE 
    total_employee NUMBER;
    BEGIN
        SELECT COUNT(*) INTO total_employee FROM employee;
        DBMS_OUTPUT.PUT_LINE('Total number of employees: ' || total_employee);
    END;
``` 
