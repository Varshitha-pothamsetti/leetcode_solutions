-- Last updated: 01/03/2026, 20:20:36
# Write your MySQL query statement below
select e.name, u.unique_id from employees e 
left join employeeUNI u on e.id = u.id;