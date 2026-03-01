-- Last updated: 01/03/2026, 20:21:40
# Write your MySQL query statement below
select name 
from Customer 
where referee_id != 2 or referee_id is NULL;