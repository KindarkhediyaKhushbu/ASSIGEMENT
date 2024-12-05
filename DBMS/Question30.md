### Define the INSERT, UPDATE, and DELETE commands in SQL

##### 1. INSERT Command:
- The INSERT command is used to add new rows of data into a table.

##### Syntax:

```sql

INSERT INTO table_name (column1, column2, column3, ...)
VALUES (value1, value2, value3, ...);
```

##### 2. UPDATE Command:
The UPDATE command is used to modify existing data in a table. It allows you to change the value of one or more columns for the rows that match a specific condition.

##### Syntax:

```sql

UPDATE table_name
SET column1 = value1, column2 = value2, ...
WHERE condition;
```

##### 3. DELETE Command:
- The DELETE command is used to remove rows from a table based on a condition.

##### Syntax:

```sql

DELETE FROM table_name
WHERE condition;
```