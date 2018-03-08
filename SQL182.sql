select Email from (select Email, count(*) as n from Person group by Email) t where n > 1;
