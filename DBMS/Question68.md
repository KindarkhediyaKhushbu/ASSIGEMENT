### Create a trigger to update the last_modified timestamp whenever an employee record is updated
```sql
    alter table employee
    add column last_modified timestamp default current_timestamp on update current_timestamp;
```
