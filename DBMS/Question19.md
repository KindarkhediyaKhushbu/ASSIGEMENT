### What is the purpose of specifying data types and constraints during table creation?

###### 1. Purpose of Specifying Data Types:
<b>Data Integrity:</b>
-  By specifying a data type, you restrict the kind of data that can be stored in a column. For example:

- INT only allows integers.
- VARCHAR allows variable-length strings, but you can specify a maximum length to avoid too long entries.

<b>Efficiency:</b>
-  Data types help the database management system (DBMS) allocate the appropriate amount of storage space and optimize indexing and queries.

###### 2. Purpose of Specifying Constraints:

NOT NULL: Ensures that a column cannot have a NULL value, meaning every record must have a value for that field. This is useful for fields that are essential for a record to be meaningful (e.g., teacher_name in a teachers table).

<b>PRIMARY KEY:</b>
-  Ensures that a column (or a combination of columns) uniquely identifies each row in the table. 

<b>UNIQUE:</b>
-  Ensures that all values in a column (or a combination of columns) are unique across all rows in the table. This is useful for columns like email addresses or user IDs, where duplicates should not be allowed.

<b>FOREIGN KEY:</b>
-  Establishes a relationship between two tables. It links a column in the current table to the primary key of another table, ensuring that the data remains consistent.


<b>DEFAULT:</b>
-  Specifies a default value for a column when no value is provided during record insertion. This ensures the column gets populated even if no explicit value is provided.

