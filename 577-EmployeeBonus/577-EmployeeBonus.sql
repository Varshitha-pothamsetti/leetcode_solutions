-- Last updated: 01/03/2026, 20:21:41
# Write your MySQL query statement below
SELECT e.name, b.bonus from Employee e 
left join bonus b on e.empId = b.empId
WHERE bonus < 1000 or bonus is null;


