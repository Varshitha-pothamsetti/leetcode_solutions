-- Last updated: 01/03/2026, 20:22:34
# Write your MySQL query statement below
select e1.name as employee from
employee e1
JOIN
employee e2
on e1.managerid = e2.id
where e1.salary > e2.salary;