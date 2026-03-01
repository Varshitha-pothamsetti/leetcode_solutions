-- Last updated: 01/03/2026, 20:22:40
# Write your MySQL query statement below
select firstName, lastName, city, state from person 
left join 
Address on person.personId = Address.personId;