###  Create a SAVEPOINT before updating the courses table, and use it to roll back specific changes.

```sql
start transaction;
savepoint before_id_update;
update  courses set sid=111111 where  course_name="C";

rollback to savepoint before_id_update;
```
