-- Last updated: 09/09/2026, 21:27:46
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

