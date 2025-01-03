### What are control structures in PL/SQL? Explain the IF-THEN and LOOP controlstructures.

Control structures in PL/SQL (Procedural Language/Structured Query Language) are used to control the flow of execution of a program. They allow the programmer to specify conditional logic, loops, and branching in order to make decisions, repeat actions, or handle exceptions. The main types of control structures in PL/SQL include:

- Conditional Control Structures:
- Looping Control Structures: 

######  IF-THEN Control Structure
The IF-THEN structure is used to perform conditional branching. Based on the evaluation of a condition (expression), certain blocks of code are executed.
###### Example :
```sql
        DECLARE
  num INT := 10;
BEGIN
  IF num > 5 THEN
    DBMS_OUTPUT.PUT_LINE('Number is greater than 5');
  END IF;
END;
```

###### LOOP Control Structure
The LOOP control structure is used to repeat a block of code multiple times, either based on a condition or for a fixed number of iterations.

 1.Basic LOOP:
###### Syntax :
 ```sql
    LOOP
   -- code to execute
   EXIT WHEN condition;
    END LOOP;
```
2. FOR LOOP
###### Syntax
```sql
    FOR counter IN start_value..end_value LOOP
   -- code to execute
    END LOOP;
```
3. WHILE LOOP
###### Syntax
```sql
    WHILE condition LOOP
   -- code to execute
    END LOOP;
```
