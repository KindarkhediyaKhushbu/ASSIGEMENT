### Write a stored procedure to retrieve all employees from the employees table based on department.

```sql

CREATE PROCEDURE GetEmployeeByDepartment(IN dep_id INT)
BEGIN
    SELECT 
        e.emp_id,
        e.emp_name,
        e.dep_id
    FROM 
        employee e
    WHERE 
        e.dep_id = dep_id;
END //

DELIMITER ;
```
