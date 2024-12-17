### Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE).

```sql
    CREATE TABLE teacher (tercher_id int PRIMARY KEY,
    teacher_name varchar(100) NOT null,
    subject varchar(20) NOT null,
    email varchar(50) UNIQUE);

```