-- Last updated: 01/03/2026, 20:21:27
# Write your MySQL query statement below
SELECT id,
CASE 
WHEN mod(id, 2) = 1 THEN LEAD(student, 1, student) OVER(ORDER BY id)
ELSE lag(student, 1, 0) OVER(ORDER BY id)
END AS student
FROM seat;
