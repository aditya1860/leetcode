select name as Customers
from Customers
left join Orders ON Customers.id = Orders.customerId
where Orders.id is NULL