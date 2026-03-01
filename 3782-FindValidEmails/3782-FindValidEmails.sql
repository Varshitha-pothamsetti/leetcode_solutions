-- Last updated: 01/03/2026, 20:19:01
SELECT
    user_id,
    email
FROM
    Users
WHERE
    email LIKE '%@%.%'
    AND (LENGTH(email) - LENGTH(REPLACE(email, '@', ''))) = 1
    AND email LIKE '%.com'
    AND SUBSTRING(email, 1, LOCATE('@', email) - 1) REGEXP '^[A-Za-z0-9_]+$'
    AND SUBSTRING(email, LOCATE('@', email) + 1,
                  LENGTH(email) - LOCATE('@', email) - LENGTH('.com')) REGEXP '^[A-Za-z]+$'
ORDER BY
    user_id ASC;