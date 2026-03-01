-- Last updated: 01/03/2026, 20:21:32
# Write your MySQL query statement below
SELECT x, y, z,
    CASE 
        WHEN x + y > z AND x + z > y AND y + z > x THEN 'Yes'
        ELSE 'No'
    END AS triangle
FROM Triangle;
