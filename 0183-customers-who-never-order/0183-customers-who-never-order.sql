# Write your MySQL query statement below
SELECT name AS Customers
from Customers
WHERE id not in(
    SELECT customerId
    from Orders
);