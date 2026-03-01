-- Last updated: 01/03/2026, 20:20:21
# Write your MySQL query statement below
select u.name, sum(t.amount) as balance
from users u
join transactions t
on u.account = t.account
group by u.account, u.name
having sum(t.amount) > 10000;