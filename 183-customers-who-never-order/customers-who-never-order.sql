# Write your MySQL query statement below
select Customers.name As Customers from Customers LEFT JOIN Orders ON Customers.id =Orders.customerId where Orders.customerId IS NULL;