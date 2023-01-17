-- Find out the name of the employee and his salary from the salary table with the 2nd highest salary

CREATE TABLE Employee (name varchar(10), salary int);
INSERT INTO Employee VALUES('Rick', 3000);
INSERT INTO Employee VALUES ('John', 4000);
INSERT INTO Employee VALUES ('Shane', 3000);
INSERT INTO Employee VALUES ('Peter', 5000);
INSERT INTO Employee VALUES ('Jackob', 7000);
 

SELECT * from
(
  select NAME, SALARY, dense_rank() over(order by SALARY desc) r  FROM EMPLOYEE
)
WHERE r=2
