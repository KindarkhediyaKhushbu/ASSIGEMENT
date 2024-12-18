###  Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.

```sql
    //Create two tables:

    CREATE TABLE department(
    dep_id int PRIMARY KEY,
    dep_name VARCHAR(20) NOT NULL);
    
    insert into departments(dep_id,dep_name)value
    (1,'HR'),
    (2,'finance'),
    (3,'IT'),
    (4,'marketing');

    //second table:

    create table employee(emp_id int primary key, emp_name varchar(50),emp_salary int,dep_id int,foreign key(dep_id)references department(dep_id));
    
    insert into employee(emp_id,emp_name,emp_salary,dep_id)
    value
    (101,'jay',200000,1),
    (102,'ajay',30000,2),
    (103,'vijay',540000,3),
    (104,'sagar',80000,4),
    (105,'chetan',75000,3);

    //INNER JOIN to display employees 

    SELECT 
    e.emp_id, 
    e.emp_name, 
    d.dep_name
    FROM 
    employee e
    INNER JOIN 
    department d ON e.dep_id = d.dep_id;

```