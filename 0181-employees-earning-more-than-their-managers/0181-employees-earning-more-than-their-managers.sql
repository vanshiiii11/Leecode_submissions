# Write your MySQL query statement below
SELECT a.name AS Employee
FROM Employee AS a
JOIN Employee as b on a.managerId=b.id
WHERE a.salary>b.salary;