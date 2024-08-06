/* Write your T-SQL query statement below */
Select Max(T.salary)  as 'SecondHighestSalary' from(select salary , Dense_Rank() over (Order By salary DESC) as Rn
from Employee)as T 
where RN = 2