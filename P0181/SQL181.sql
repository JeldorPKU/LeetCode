select Name as Employee from (
  select e1.Id, e1.Name, e1.Salary as Salary, e1.ManagerId, e2.Salary as mSalary from Employee as e1 left join Employee as e2 on e1.ManagerId = e2.Id
) as t where Salary > mSalary;
