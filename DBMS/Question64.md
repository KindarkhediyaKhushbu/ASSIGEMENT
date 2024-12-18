### Modify the view to exclude employees whose salaries are below $50,000.
```sql
    CREATE OR REPLACE VIEW EmployeeDepartmentView AS
SELECT 
    e.emp_id,
    d.dep_name,
    e.emp_salary
FROM 
    employee e
JOIN 
    department d ON e.dep_id = d.dep_id
WHERE 
    e.emp_salary >= 50000;
```