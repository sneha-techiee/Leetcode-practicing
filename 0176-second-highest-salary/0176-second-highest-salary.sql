# Write your MySQL query statement below
select (select distinct salary as SecondHighestSalary from Employee order by salary Desc
limit 1 offset 1 
)
as SecondHighestSalary  ;
-- limit is used to get specified count of rows and offset is used when u wantto retreive result by dropping some rows from the starting


-- select Max(salary)  as SecondHighestSalary from Employee
--     where salary < (select Max(salary) from Employee)
-- ;