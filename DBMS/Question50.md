### How are joins used to combine data from multiple tables?

<b>1. INNER JOIN:</b>
- An INNER JOIN returns rows that have matching values in both tables.

Example:
```sql
SELECT employees.name, departments.name
FROM employees
INNER JOIN departments
ON employees.department_id = departments.id;
```

<b>2. LEFT JOIN:</b>
- A LEFT JOIN returns all rows from the left table, and the matched rows from the right table. If no match is found, NULL values are returned for columns from the right table.

Example:
```sql

SELECT employees.name, departments.name
FROM employees
LEFT JOIN departments
ON employees.department_id = departments.id;
```

<b>3.RIGHT JOIN :</b>
 - RIGHT JOIN returns all the rows of the table on the right side of the join and matching rows for the table on the left side of the join.

Example:
```sql

SELECT employees.name, departments.name
FROM employees
RIGHT JOIN departments
ON employees.department_id = departments.id;
```

<b>4.FULL JOIN :</b>
 - FULL JOIN creates the result-set by combining results of both LEFT JOIN and RIGHT JOIN. 

 Example:
```sql

SELECT employees.name, departments.name
FROM employees
FULL OUTER JOIN departments
ON employees.department_id = departments.id;
```