### Write a stored procedure that accepts course_id as input and returns the course details.

```sql
    DELIMITER $$

    create procedure GetCourseDetailsById(in course_id int)
    begin
        select course_id, course_name, course_description, dep_id, course_duration
        from courses
    where course_id = course_id;
end $$

DELIMITER ;