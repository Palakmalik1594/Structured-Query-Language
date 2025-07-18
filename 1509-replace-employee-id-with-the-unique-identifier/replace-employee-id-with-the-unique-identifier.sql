# Write your MySQL query statement below
select IFNULL(eu.unique_id,NULL) as unique_id,e.name from Employees e left join EmployeeUNI eu on e.id=eu.id;