# Write your MySQL query statement below
SELECT  Name AS Employee
FROM Employee e
WHERE Salary > (
SELECT  Salary
FROM Employee e1
WHERE e.ManagerId = e1.Id); 