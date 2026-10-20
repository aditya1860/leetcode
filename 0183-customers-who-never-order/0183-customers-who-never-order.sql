select name as Customers
from Customers
left join Orders ON  Orders.customerId=Customers.id 
where Orders.id is NULL