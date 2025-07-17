# Write your MySQL query statement below
select Queries.query_name,
ROUND(avg(rating/position ),2) as quality,
round(sum(case when rating<3 then 1 else 0 end)*100.0 / count(*),2) as poor_query_percentage
from Queries
group by Queries.query_name 