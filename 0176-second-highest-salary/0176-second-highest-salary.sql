# Write your MySQL query statement below
-- select salary from Employee order by salary Desc
-- limit 1 offset 1 
-- as SecondHighestSalary ;

select Max(salary)  as SecondHighestSalary from Employee
    where salary < (select Max(salary) from Employee)
;