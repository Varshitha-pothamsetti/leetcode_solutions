-- Last updated: 01/03/2026, 20:22:38
# Write your MySQL query statement below
select (select distinct salary from employee
order by salary desc
limit 1 offset 1) as secondhighestsalary;