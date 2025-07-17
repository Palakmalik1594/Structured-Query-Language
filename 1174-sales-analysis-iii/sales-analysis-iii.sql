# Write your MySQL query statement below
select Product.product_id ,Product.product_name from Product join Sales on Product.product_id=Sales.product_id group by Product.product_id,Product.product_name HAVING MAX(Sales.sale_date) <= '2019-03-31' AND MIN(Sales.sale_date) >= '2019-01-01';
