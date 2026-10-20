# Write your MySQL query statement below
DELETE a 
from Person a
JOIN Person b ON a.email=b.email AND a.id>b.id; 