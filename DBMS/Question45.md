### Explain how transactions are managed in SQL databases.

Transactions group a set of tasks into a single execution unit. Each transaction begins with a specific job and ends when all the tasks in the group successfully completed. If any of the tasks fail, the transaction fails. 

Transaction is manage by commit , savepoint and rollback.

- Commit
If everything is in order with all statements within a single transaction, all changes are recorded together in the database is called committed. The COMMIT command saves all the transactions to the database since the last COMMIT.
<n>
</n>
- Rollback
If any error occurs with any of the SQL grouped statements, all changes need to be aborted. The process of reversing changes is called rollback. This command can only be used to undo transactions since the last COMMIT or ROLLBACK command was issued. 
<n>
</n>
- Savepoint
SAVEPOINT creates points within the groups of transactions in which to ROLLBACK. 
A SAVEPOINT is a point in a transaction in which you can roll the transaction back to a certain point without rolling back the entire transaction.