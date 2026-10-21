# Write your MySQL query statement below
SELECT Product.product_id, Product.product_name
FROM Product
JOIN Sales on Sales.product_id=Product.product_id
GROUP BY Product.product_id,Product.product_name
HAVING MIN(sale_date)>= '2019-01-01' AND MAX(sale_date)<= '2019-03-31';