-- Last updated: 01/03/2026, 20:20:01
# Write your MySQL query statement below
SELECT
    user_id,
    MAX(time_stamp) AS last_stamp
FROM
    Logins
WHERE
    EXTRACT(YEAR FROM time_stamp) = 2020
GROUP BY
    user_id;