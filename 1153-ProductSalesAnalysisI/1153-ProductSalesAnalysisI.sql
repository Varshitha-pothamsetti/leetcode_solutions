-- Last updated: 27/02/2026, 19:59:05
# Write your MySQL query statement below
select product_name, year, price from Sales
join Product ON
Sales.product_id = Product.product_id