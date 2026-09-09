-- Last updated: 09/09/2026, 21:27:02
# Write your MySQL query statement below
SELECT teacher_id,
    COUNT(DISTINCT subject_id) AS cnt
FROM Teacher
GROUP BY teacher_id;