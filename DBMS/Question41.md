### How do you manage privileges using these commands?

Managing user access and privileges is a crucial aspect of database administration in MySQL. After creating a user account with the CREATE USER statement, the next step is to define what that user can do within the database.

This is achieved through the GRANT statement, which allows administrators to assign specific privileges to users and ensure they can perform only the actions necessary for their roles. Also, if a user’s access needs to be restricted, the REVOKE statement can remove previously granted privileges.

### Example
```sql
/*grant single privileges*/
GRANT SELECT ON Users TO Amit;

/*grant multiple privileges*/
GRANT SELECT, INSERT, DELETE, UPDATE ON Users TO 'Amit';

/*privileges  to all user*/
GRANT SELECT  ON Users TO '*';
```

