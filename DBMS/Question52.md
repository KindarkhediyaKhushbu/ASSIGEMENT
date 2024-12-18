### Use a LEFT JOIN to show all departments, even those without employees


```sql
    SELECT 
    d.dep_id, 
    d.dep_name, 
    e.emp_id, 
    e.emp_name
    FROM 
    department d
    LEFT JOIN 
    employee e ON d.dep_id = e.dep_id;

```