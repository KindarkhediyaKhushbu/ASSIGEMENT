###  Use the AVG aggregate function to find the average salary of employees in each department.

```sql
    select dep_id, AVG(emp_salary) as average_salary
    from employee
    group by dep_id;
```