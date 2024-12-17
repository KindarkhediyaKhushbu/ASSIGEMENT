### Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.`

```sql

    //user one

    create user "khushbu" identified by"khushbu009";

    //user two

    create user "khushi" identified by "khushi004";

```
###### grant user1 permission to SELECT from the courses:

```sql
    grant select on courses to khushbu;
```