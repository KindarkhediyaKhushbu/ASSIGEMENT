### Explain the CREATE command and its syntax

- The CREATE command has a particular syntax which needs to be followed In order to create databases or tables with desired structure.

##### syntax :
```sql
    CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
   ....
);
```
##### Example :
```sql
CREATE TABLE student(student_id int, student_name varchar(20), age int ,class varchar(20),address varchar(50));
```