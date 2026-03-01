-- Last updated: 01/03/2026, 20:20:46
SELECT person_name
FROM Queue
WHERE turn IN (
    SELECT turn
    FROM (
        SELECT turn, SUM(weight) OVER (ORDER BY turn) AS cumulative_weight
        FROM Queue
    ) AS subquery
    WHERE cumulative_weight <= 1000
)
ORDER BY turn DESC
LIMIT 1;