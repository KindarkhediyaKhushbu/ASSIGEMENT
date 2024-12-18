### Write a stored procedure that accepts course_id as input and returns the course details.

```sql
    DELIMITER //

CREATE PROCEDURE GetCourseDetails(IN course_id INT)
BEGIN
    SELECT 
        c.course_id,
        c.course_name,
        c.course_duration,
        c.dep_id
    FROM 
        courses c
    WHERE 
        c.course_id = course_id;
END //

DELIMITER ;
```