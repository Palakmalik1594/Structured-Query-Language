# Write your MySQL query statement below
select Cinema.id,Cinema.movie,Cinema.description,Cinema.rating from Cinema where Cinema.id%2!=0 and Cinema.description!='boring' order by Cinema.rating desc;