### How do PRIMARY KEY and FOREIGN KEY constraints differ?


 |Key |Primary Key |Foreign Key|
 | ------- | --------- | ------- |
|Basic|It is used to uniquely identify data in the table.|It is used to maintain relationship between tables.
|Null|It can't be NULL.|It can accept the NULL values.
|Duplicate|Two or more rows can't have same primary key.|It can carry duplicate value for a foreign key attribute.
|Index|Primary has clustered index.|By default, It is not clustered index.
|Tables|Primary key constraint can be defined on temporary table.|It can't be defined on temporary tables.