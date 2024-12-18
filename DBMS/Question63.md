### Create a view to show all employees along with their department names.
```sql
    CREATE VIEW EmployeeDepartmentView AS
SELECT 
    e.emp_id,
    d.dep_name
FROM 
    employee e
JOIN 
    department d ON e.dep_id = d.dep_id;
```