-- Last updated: 01/03/2026, 20:21:33
# Write your MySQL query statement below
SELECT s.name
FROM SalesPerson s
WHERE s.sales_id NOT IN (
    SELECT DISTINCT o.sales_id 
    FROM Orders o 
    JOIN Company c ON o.com_id = c.com_id 
    WHERE c.name = 'RED'
);
