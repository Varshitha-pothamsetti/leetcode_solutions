-- Last updated: 01/03/2026, 20:20:40
# Write your MySQL query statement
select p.product_name, sum(o.unit) as unit
from
products p
join
orders o
on p.product_id = o.product_id
where o.order_date >= '2020-02-01' and o.order_date <= '2020-02-29'
group by p.product_id, p.product_name
having sum(o.unit) >= 100;