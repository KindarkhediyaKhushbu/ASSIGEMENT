### Group employees by department and count the number of employees in each department using GROUP BY

```sql
    SELECT 
    d.dep_id, 
    d.dep_name, 
    COUNT(e.emp_id) AS employee_count
    FROM 
    department d
    LEFT JOIN 
    employee e ON d.dep_id = e.dep_id
    GROUP BY 
    d.dep_id, d.dep_name;
```