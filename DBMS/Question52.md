### Use a LEFT JOIN to show all departments, even those without employees


```sql
    select departments.dep_id,departments.dep_name,employee.emp_id, employee.emp_name
    from departments departments
    left join employee employee
    on departments.dep_id=employee.dep_id;


```