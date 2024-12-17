### Create a trigger to automatically log changes to the employees table when a new employee is added.

```sql
    create table employee_log (
    log_id int auto_increment primary key,
    emp_id int,
    emp_name varchar(50),
    dep_id int,
    emp_salary decimal(10, 2),
    action_type varchar(50),
    action_timestamp timestamp default current_timestamp);
```