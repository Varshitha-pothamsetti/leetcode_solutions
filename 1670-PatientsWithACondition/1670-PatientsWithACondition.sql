-- Last updated: 01/03/2026, 20:20:25
# Write your MySQL query statement below
SELECT 
    patient_id,
    patient_name,
    conditions
FROM Patients
WHERE conditions LIKE 'DIAB1%'      
   OR conditions LIKE '% DIAB1%';   
