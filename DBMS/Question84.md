### Commit part of a transaction after using a savepoint and then rollback the remaining changes.
```sql

start transaction;
  SAVEPOINT before_insert;

  INSERT INTO employee (emp_id, dep_id)
  VALUES (303, 30);

  INSERT INTO employees (emp_id, dep_id)
  VALUES (304,  40);
  COMMIT;

  SAVEPOINT after_first_commit;
  INSERT INTO employee (emp_id, dep_id)
  VALUES (305, 50);

  INSERT INTO employee (emp_id, dep_id)
  VALUES (306, 60);
  ROLLBACK TO after_first_commit;
```