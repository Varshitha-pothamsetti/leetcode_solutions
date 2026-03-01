-- Last updated: 01/03/2026, 20:20:29
# Write your MySQL query statement below
SELECT sell_date, COUNT(DISTINCT(product)) AS num_sold, GROUP_CONCAT(DISTINCT product,'') AS products
FROM Activities
GROUP BY sell_date