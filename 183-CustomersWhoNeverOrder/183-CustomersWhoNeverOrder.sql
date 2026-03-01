-- Last updated: 01/03/2026, 20:22:32
# Write your MySQL query statement below

select name as Customers from customers
where id not in (select customerid from orders);
