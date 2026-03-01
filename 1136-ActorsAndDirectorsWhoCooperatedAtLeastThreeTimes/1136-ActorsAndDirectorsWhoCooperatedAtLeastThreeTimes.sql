-- Last updated: 01/03/2026, 20:20:59
# Write your MySQL query statement below
select actor_id, director_id from ActorDirector group by actor_id, director_id having count(timestamp) >= 3;