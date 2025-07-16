# Write your MySQL query statement below
select SalesPerson.name from SalesPerson where SalesPerson.sales_id not in(
    select Orders.sales_id from Orders join company on orders.com_id =company.com_id where company.name='red'
)