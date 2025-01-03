### What is a view in SQL, and how is it different from a table?

| Basis |View |Table |
|---------|---------|---------|
|Definition|A view is a virtual table that derives its data from one or more base tables through a SQL query.|A table is a physical object that stores data in the form of rows and columns.|
|Dependency|A view depends on underlying tables or other views for data retrieval.|A table is an independent data object that directly stores information.|
|Database space|Views do not occupy physical storage space. They only store the query structure.|Tables consume physical space to store data in a database|
|Manipulate data|Data cannot be added, updated, or deleted directly from a view.|Data in tables can be added, updated, or deleted using SQL commands like INSERT, UPDATE, and DELETE.|
|table/view relationship|Views can combine multiple tables using joins, unions, etc.|Tables can have primary keys, foreign keys, and indexes to maintain relationships between different tables.|