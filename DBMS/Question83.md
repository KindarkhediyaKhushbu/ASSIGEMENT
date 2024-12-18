### Perform a transaction where you create a savepoint, insert records, then rollback to the savepoint.
```sql
START TRANSACTION;
  
  SAVEPOINT before_insert;

  
  INSERT INTO employee(emp_id, dep_id)
  VALUES (301, 10);

  INSERT INTO employee(emp_id, dep_id)
  VALUES (302, 20);

  ROLLBACK TO before_insert;
  DBMS_OUTPUT.PUT_LINE('Rolled back to the savepoint. No records inserted.');
```
