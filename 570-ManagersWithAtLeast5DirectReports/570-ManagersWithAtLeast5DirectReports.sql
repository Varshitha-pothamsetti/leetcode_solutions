-- Last updated: 01/03/2026, 20:21:43
# Write your MySQL query statement below
SELECT
    e.name
FROM
    Employee e
JOIN
    (SELECT
        managerId
    FROM
        Employee
    WHERE managerId IS NOT NULL
    GROUP BY managerId
    HAVING COUNT(managerId) >= 5) AS managerCounts
ON e.id = managerCounts.managerId;