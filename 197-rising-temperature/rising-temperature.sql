# Write your MySQL query statement below
select W1.id As id from Weather W1 join Weather W2 ON datediff(w1.recorddate,w2.recorddate)=1 where w1.temperature>w2.temperature;