### What is the SELECT statement, and how is it used to query data?

<b>SELECT Statement in SQL :</b>
- The SELECT statement in SQL is used to fetch or retrieve data from a database. It allows users to access the data and retrieve specific data based on specific conditions.

###### Basic Syntax:
```sql
    SELECT column1, column2, ...
    FROM table_name;
```

###### Selecting All Columns:
```sql
    SELECT * FROM courses;
```

###### Selecting Specific Columns:
```sql
    SELECT course_name, course_duration FROM courses;
```

###### Using a WHERE Clause to Filter Data :
```sql
    SELECT course_name, course_duration
    FROM courses
    WHERE course_duration > 12;
```

###### Using ORDER BY to Sort Data :

```sql
    SELECT course_name, course_duration
    FROM courses
    ORDER BY course_duration DESC;
```

######  Limiting the Number of Rows :

```sql
    SELECT course_name, course_duration
    FROM courses
    LIMIT 5;
```