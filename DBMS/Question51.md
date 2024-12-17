###  Create two tables: departments and employees. Perform an INNER JOIN to display employees along with their respective departments.

```sql
    //Create two tables:

    create table departments(dep_id int primary key,dep_name varchar(20));
    
    insert into departments(dep_id,dep_name)value
    (1,'HR'),
    (2,'finance'),
    (3,'IT'),
    (4,'marketing');

    //second table:

    create table employee(emp_id int primary key, emp_name varchar(50),dep_id int,foreign key(dep_id)references departments(dep_id));

    insert into employee(emp_id,emp_name,dep_id)
    value
    (101,'jay',1),
    (102,'ajay',2),
    (103,'vijay',3),
    (104,'sagar',4),
    (105,'chetan',3);

    //INNER JOIN to display employees 

    select employee.emp_id, employee.emp_name, departments.dep_name from employee employee inner join departments departments on employee.dep_id=departments.dep_id;

```