### Insert a few rows into the courses table and use COMMIT to save the changes.

```sql
    START TRANSACTION;
    INSERT INTO courses (course_id,course_name,course_duration)
    VALUES
    (3, 'c language',3),
    (5, 'c++', 3),
    (6, 'DBMS', 3),
    (7, 'oracle', 5),
    (8, 'java',15);

    COMMIT;
```