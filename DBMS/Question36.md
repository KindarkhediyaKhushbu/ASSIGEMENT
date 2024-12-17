### Explain the use of the ORDER BY and WHERE clauses in SQL queries.

<b> 1. ORDER BY Clause:</b> ORDER BY is used with the SQL SELECT statement and is usually specified after the WHERE, HAVING, and GROUP BY clauses.

- Some databases sort the query results in an ascending order by default.
- To sort the data in ascending order, we use the keyword ASC.
- To sort the data in descending order, we use the keyword DESC.

##### Syntax:
```sql
    SELECT column-list
    FROM table_name
    [ORDER BY column1, column2, .. columnN] [ASC | DESC];
```
<b>2. WHERE Clause:</b>
- The SQL WHERE clause is used to specify a condition while fetching or modifying data in a database. It filters the rows that are affected by the SELECT, UPDATE, DELETE, or INSERT operations.

##### Syntax:
```sql
    SELECT column1, column2, ...
    FROM table_name
    WHERE condition;
```