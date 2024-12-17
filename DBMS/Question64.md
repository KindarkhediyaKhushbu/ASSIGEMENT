### Modify the view to exclude employees whose salaries are below $50,000.
```sql
    create view EmployeeDepartmentView as
    select e.emp_id, e.emp_name, d.dep_name, e.employee_salary
    from employee e
    join departments d on e.dep_id = d.dep_id
    where e.employee_salary >= 50000;
```