### Create a trigger to update the last_modified timestamp whenever an employee record is updated
```sql
    delimiter //
    CREATE TRIGGER emplog
    BEFORE UPDATE ON employee
    FOR EACH ROW
    BEGIN
    SET NEW.last_modified = NOW();
    END; //```
