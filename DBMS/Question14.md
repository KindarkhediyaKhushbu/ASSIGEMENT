### What is the role of NOT NULL and UNIQUE constraints?

<b>1. NOT NULL –</b> 
- If we specify a field in a table to be NOT NULL. Then the field will never accept null value. That is, you will be not allowed to insert a new row in the table without specifying any value to this field. 

#### Role:
 <b>Prevents Missing Data:</b> 
 - Ensures that a column must always contain a value.

<b>Ensures Data Completeness:</b>
-  For columns where a value is required for proper data representation, like a user’s name, address, or date of birth, a NOT NULL constraint guarantees that this critical information is always provided.

<b> 2. UNIQUE – </b>

- No two rows can have the same value in a column or set of columns with the UNIQUE constraint.

#### Role:
<b>Ensures Uniqueness:</b> 
- Prevents duplicate values from being inserted into a column, ensuring that the data remains distinct.

<b>Primary Key Alternative:</b> 
- It is often used for fields that need to be unique, but aren't necessarily the primary identifier of a row. For example, a username or email address might need to be unique across a table, but they might not be the primary key.
