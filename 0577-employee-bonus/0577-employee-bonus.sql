# Write your MySQL query statement below
select x.name, y.bonus from employee x left join bonus y on x.empid = y.empid where y.bonus<1000 or y.bonus is null; 