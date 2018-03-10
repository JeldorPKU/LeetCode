select class from (select class, count(distinct student) as n from courses group by class) as t where n >= 5;
