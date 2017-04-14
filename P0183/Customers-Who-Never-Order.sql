select Customers.Name as Customers 
from Customers left join Orders 
on Orders.CustomerId=Customers.Id
where Orders.Id is null;
