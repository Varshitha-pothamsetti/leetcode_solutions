-- Last updated: 27/02/2026, 19:58:41
# Write your MySQL query statement below
SELECT employee_id
FROM (
    SELECT employee_id FROM Employees
    UNION
    SELECT employee_id FROM Salaries
) AS all_emp
WHERE employee_id NOT IN (SELECT employee_id FROM Employees)
   OR employee_id NOT IN (SELECT employee_id FROM Salaries)
ORDER BY employee_id;

