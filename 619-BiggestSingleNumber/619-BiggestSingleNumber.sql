-- Last updated: 01/03/2026, 20:21:30
# Write your MySQL query statement below
select max(num) as num
from(
select num 
from MyNumbers 
group by num 
having count(*) = 1
) t;