# Write your MySQL query statement below
-- Create table Person(
--     personID int primary key,
--     lastname varchar,
--     firstname varchar
-- );
-- create table Address(
--     addressId int primary key,
--     personId int,
--     city varchar,
--     state varchar
-- );

-- use left join because we want every row from ist table and if right table has no match then it returns null
select firstName, lastName , city, state from Person
left join
Address on Person.personId = Address.PersonId;

-- ON clause is used to tell database how to connect two tables, without this database dont know on which basis it can connect two tables 