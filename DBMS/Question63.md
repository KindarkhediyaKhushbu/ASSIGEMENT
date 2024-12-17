### Create a view to show all employees along with their department names.
```sql
    create view EmployeeDepartmentView AS
    select e.emp_id, e.emp_name, d.dep_name
    from employee e
    join departments d on e.dep_id = d.dep_id;
```