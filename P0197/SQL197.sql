select w1.Id as Id from Weather as w1 
left join Weather as w2 
on datediff(w1.Date, w2.Date) = 1 where w1.Temperature > w2.Temperature;
