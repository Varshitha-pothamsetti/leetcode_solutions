-- Last updated: 01/03/2026, 20:20:17
# Write your MySQL query statement below
SELECT user_id,
       CONCAT(UPPER(LEFT(name, 1)), LOWER(SUBSTRING(name, 2))) AS name
FROM Users
ORDER BY user_id;
