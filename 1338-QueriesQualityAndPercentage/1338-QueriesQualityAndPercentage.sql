-- Last updated: 01/03/2026, 20:20:45
# Write your MySQL query statement below
SELECT 
    query_name,
    ROUND(AVG(rating / position), 2) AS quality,
    ROUND((SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) / COUNT(*)) * 100, 2) AS poor_query_percentage
FROM Queries
GROUP BY query_name;
