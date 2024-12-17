### What is the purpose of the COMMIT and ROLLBACK commands in SQL?

<b>1.  COMMIT: </b>
- The COMMIT command is used to save all changes made during the current transaction to the database permanently.

- When a transaction is committed, all operations (such as INSERT, UPDATE, DELETE) performed in the transaction are finalized and made visible to other users.
<b> Example : </b>

```sql
    BEGIN TRANSACTION;
    UPDATE employees SET salary = salary + 1000 WHERE department = 'Sales';
    COMMIT;
```

<b>2. ROLLBACK : </b>
- The ROLLBACK command is used to undo all the changes made during the current transaction.
- If an error occurs or if you want to discard any changes made during a transaction before it is committed, you use ROLLBACK.

```sql
    BEGIN TRANSACTION;
    UPDATE employees SET salary = salary + 1000 WHERE department = 'Sales';
    ROLLBACK;
```