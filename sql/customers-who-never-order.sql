# Write your MySQL query statement below
SELECT  Name AS Customers
FROM Customers
WHERE Id not IN ( SELECT CustomerId FROM Orders)