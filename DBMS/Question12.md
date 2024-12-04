### What are constraints in SQL? List and explain the different types of constraints.

- SQL constraints are used to specify rules for the data in a table.

- Constraints are used to limit the type of data that can go into a table. This ensures the accuracy and reliability of the data in the table. If there is any violation between the constraint and the data action, the action is aborted.

##### constraints type :

<b>NOT NULL -</b> Ensures that a column cannot have a NULL value

<b>UNIQUE -</b> Ensures that all values in a column are different

<b>PRIMARY KEY -</b> A combination of a NOT NULL and UNIQUE. Uniquely identifies each row in a table

<b>FOREIGN KEY -</b> Prevents actions that would destroy links between tables

<b>CHECK - </b>Ensures that the values in a column satisfies a specific condition

<b>DEFAULT -</b> Sets a default value for a column if no value is specified

<b>CREATE INDEX -</b> Used to create and retrieve data from the database very quickly
