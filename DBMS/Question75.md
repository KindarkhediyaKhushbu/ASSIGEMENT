### Lab 1: Write a PL/SQL block using an IF-THEN condition to check the department of an employee.
```sql
    DECLARE
  emp_id NUMBER := 101; 
  emp_department VARCHAR2(50);
BEGIN

  SELECT dep_name INTO emp_department
  FROM employee
  WHERE emp_id = emp_id;

 
  IF emp_department = 'Sales' THEN
    DBMS_OUTPUT.PUT_LINE('The employee works in Sales dep.');
  ELSIF emp_department = 'HR' THEN
    DBMS_OUTPUT.PUT_LINE('The employee works in  HR dep.');
  ELSE
    DBMS_OUTPUT.PUT_LINE('The employee works in another dep.');
  END IF;
END;
/
```