-- Last updated: 01/03/2026, 20:20:13
# Write your MySQL query statement below
SELECT
    date_id,
    make_name,
    COUNT(DISTINCT lead_id) AS unique_leads,
    COUNT(DISTINCT partner_id) AS unique_partners
FROM
    DailySales
GROUP BY
    date_id,
    make_name