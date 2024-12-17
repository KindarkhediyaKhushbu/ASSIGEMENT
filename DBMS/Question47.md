### Insert additional rows, then use ROLLBACK to undo the last insert operation.
```sql
START TRANSACTION;
    INSERT INTO courses (course_id,course_name,course_duration)
    VALUES(101, 'c language',3),
    (102, 'c++', 3);
    
ROLLBACK;
```
