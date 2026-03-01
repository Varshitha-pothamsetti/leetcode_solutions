-- Last updated: 01/03/2026, 20:20:51
# Write your MySQL query statement below
select distinct author_id as id from views where author_id = viewer_id order by id asc;