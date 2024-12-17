### Group employees by department and count the number of employees in each department using GROUP BY

```sql
    select dep_id, count (emp_id) as emp_count
    from employee
    group by dep_id;
```