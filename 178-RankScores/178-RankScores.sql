-- Last updated: 01/03/2026, 20:22:36
# Write your MySQL query statement below
select score, dense_rank() over (order by score desc) as `rank` from scores order by score desc;