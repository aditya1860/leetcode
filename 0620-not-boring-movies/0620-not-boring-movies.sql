# Write your MySQL query statement below
SELECT *
FROM Cinema
WHERE ID%2!=0 AND description!= 'boring'
GROUP BY id
ORDER BY rating DESC;