-- Last updated: 01/03/2026, 20:21:34
# Write your MySQL query statement below
SELECT id, COUNT(*) AS num
FROM (
    SELECT requester_id AS id FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS id FROM RequestAccepted
) AS all_ids
GROUP BY id
HAVING COUNT(*) = (
    SELECT MAX(friend_count)
    FROM (
        SELECT COUNT(*) AS friend_count
        FROM (
            SELECT requester_id AS id FROM RequestAccepted
            UNION ALL
            SELECT accepter_id AS id FROM RequestAccepted
        ) AS combined_ids
        GROUP BY id
    ) AS subquery
);