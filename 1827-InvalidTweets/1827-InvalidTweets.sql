-- Last updated: 01/03/2026, 20:20:14
# Write your MySQL query statement below
select tweet_id
from tweets
where length(content) > 15;