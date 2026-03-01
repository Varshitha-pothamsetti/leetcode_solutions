-- Last updated: 01/03/2026, 20:21:29
# Write your MySQL query statement below
select * from Cinema 
WHERE id % 2 = 1
  AND description != 'boring'
ORDER BY rating DESC;