### What are the key features of SQL?

####  Data Definition Language (DDL):</b> 
- SQL provides a set of commands to define and modify the structure of a database, including creating tables, modifying table structure, and dropping tables.

- <b>CREATE: </b>Creates databases, tables, indexes, and other database objects.
- <b>ALTER: </b>Modifies the structure of an existing database object (like a table).
- <b>DROP: </b>Deletes database objects such as tables, views, or entire databases.

#### Data Manipulation:
- SQL provides commands for inserting, updating, and deleting data in tables:

- <b>INSERT: </b>Adds new rows of data into a table.
- <b>UPDATE: </b>Modifies existing data in a table.
- <b>DELETE: </b>Removes rows from a table based on specified conditions.

#### Data Control:

S- QL includes Data Control Language (DCL) commands that control access to data:
- <b>GRANT:</b> Provides specific privileges to users.
- <b>REVOKE:</b> Removes specific privileges from users.

#### Transaction Control:
- <b>TRANSACTION: </b> Starts a transaction.
- <b>COMMIT: </b>Saves all changes made in the current transaction.
- <b>ROLLBACK: </b> Undoes all changes made since the last commit.
- <b>SAVEPOINT: </b>Sets a point within a transaction to roll back to if needed.

#### Portability:

- SQL is a standardized language, meaning that it can be used across different relational database management systems (RDBMS), though each system may have its own extensions.


#### Constraints:

- SQL provides constraints to enforce data integrity and rules within the database:
- <b> PRIMARY KEY:</b> Ensures that each record in a table is uniquely identifiable.
- <b>FOREIGN KEY:</b> Maintains referential integrity between two tables.
- <b>UNIQUE:</b> Ensures that all values in a column are unique.
- <b>CHECK:</b> Ensures that values in a column meet specific conditions.
- <b>NOT NULL:</b> Ensures that a column cannot have NULL values.
