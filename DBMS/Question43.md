###  Revoke the INSERT permission from user1 and give it to user2.

###### Revoke the INSERT permission from user1:
```sql

    REVOKE SELECT on courses FROM khushbu;
```
###### give it to user2 :
```sql

    grant select on courses to khushi;
```