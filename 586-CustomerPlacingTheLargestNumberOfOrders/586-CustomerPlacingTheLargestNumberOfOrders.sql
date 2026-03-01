-- Last updated: 01/03/2026, 20:21:38
# Write your MySQL query statement below
select customer_number 
from Orders group by customer_number
order by count(*) desc
limit 1;