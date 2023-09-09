-- desc customer;
-- Time Stramp and Extract in SQL
-- => used when we create a new database and have to store timestramp there 
-- it is a data type used for values that contain both date and time
--  Time, date, year(YYYY,YY), timestamp(date time : firmate=>YYYY-MM-DD, HH:MM:SS), timestampz(dat time with time zone)


-- time stamp function and operators 
--  SHOW TIMEZONE       --?
-- SELECT NOW()
-- SELECT TIMEOFDAY()   --?
-- SELECT CURRENT_TIME
-- SELECT CURRENT_DATE



-- EXTRACT Function
-- The EXTRACT() function extracts a part from a given date value.
-- Syntax: SELECT EXTRACT(MONTH FROM date_field) FROM Table
-- • YEAR
-- • QUARTER
-- • MONTH
-- • WEEK
-- • DAY
-- • HOUR
-- • MINUTE
-- DOW — day of week  --?
-- DOY — dav of year  --?


-- select extract(HOUR from p_date) as month,p_date from payment;
-- select * from payment



-- select * from payment;

-- join means to combine something
--  combine data form two ro morw table based on related columns btw them 

-- 1)Inner join -> returns common record bet two tables;


-- select * from customer as c
-- INNER JOIN payment as p
-- on c.id=p.id

-- 2) Left Join

-- select * from customer as c
-- LEFT JOIN payment as p
-- on c.id=p.id

-- 2) Right Join
-- select * from customer as c
-- RIGHT JOIN payment as p
-- on c.id=p.id


-- FULL JOIN
-- • Returns all records when
-- there is a match in either left
-- or right table


-- select * from customer as c
-- FULL OUTER JOIN payment as p
-- on c.id=p.id   -- ??

-- self join
-- => used with same table 
-- • Syntax
-- SELECT column _ name(s)
-- FROM Table AS Tl
-- JOIN Table AS T2
--ON Tl.col name = T2.col name
-- 


-- methods of string in sql

-- select substring(name,1,3) FROM customer ;
-- select concat(name,city) FROM customer ;
-- select replace(name,'John', 'rohan') FROM customer ;
-- select Age1 from customer;

-- select length(trim(name)), name from customer;

-- update customer set name='           Jo           ' where name='John Doe';

-- inserting 
-- INSERT INTO customer (id, name, Age1, city) VALUES
-- (1, 'John Doe', 30, 'New York'),
-- (2, 'Jane Smith', 25, 'Los Angeles'),
-- (3, 'Alice Johnson', 22, 'Chicago'),
-- (4, 'Michael Brown', 40, 'Houston'),
-- (5, 'Emily Williams', 28, 'San Francisco'),
-- (6, 'Daniel Lee', 35, 'Seattle'),
-- (7, 'Olivia Miller', 29, 'Miami'),
-- (8, 'William Davis', 27, 'Boston'),
-- (9, 'Sophia Martinez', 31, 'Dallas'),
-- (10, 'Liam Wilson', 24, 'Atlanta');







-- delete from customer where id =2;

-- alter table customer add column phone_number varchar(10) not null;
-- alter table customer drop column phone_number;
-- update customer set phone_number='1111111111' where id=3;




-- -- if we want to change the datatype of column
-- alter table customer modify column age float;


-- -- to change column name**************************************
-- alter table customer change age Age1 float;

-- -- to drop the table 
-- drop table customer;



-- -- to truncate the table

-- truncate table customer;





-- -- SELECT STATEMENT

-- TO GET THE DISCTINCT VALUES FORM THE TABLE OR OF COLUMN
-- select distinct city from customer ;



-- order by with limit can use without order by also
-- SELECT * from customer order by name asc LIMIT 5;


--  order by clouse (ASC/DESC)
-- select * from customer
-- order BY name desc;






--  copy date from excell to table 
-- -> create table with the same column as in excell sheet 
-- -> copy(col1,col2.col3-----)\
-- from 'path of file'
-- Delimiter ','
-- csv header;




-- most used aggregaate function in sql
-- => perfirms calculation on multiple values and return single value
-- => often used with select or group by clouse
-- 1) count: return total number of rows
-- select count(*) from customer;
-- select count(name) from customer;
-- select sum(Age1) from customer;
-- select max(Age1) from customer;
-- select min(Age1) from customer;
-- select avg(Age1) from customer;
-- select round(avg(Age1)) from customer;
-- select round(avg(Age1),2) from customer;




-- select * FROM payment;


-- group by function
-- => it group the rows that have the same value into the summary rows
-- => often used with aggregate functions 

-- select medium,sum(amount) as total
-- from payment 
-- GROUP BY medium;



-- having clouse :=> used with group by statements or with groups to make a condition
-- => where clouse with select 
-- => having with group by
-- select mode, count(customer_id) from payment
-- group BY mode
-- having count(customer_id)<=2




-- CREATE TABLE payment (
--   id INT NOT NULL AUTO_INCREMENT,
--   amount DECIMAL(10,2) NOT NULL,
--   mode VARCHAR(255) NOT NULL,
--   medium VARCHAR(255) NOT NULL,
--   customer_id INT NOT NULL,
--   p_date DATETIME NOT NULL,
--   PRIMARY KEY (id)
-- );

-- INSERT INTO payment (amount, mode, medium, customer_id, p_date) VALUES
--   (100.00, 'credit card', 'online', 1, '2023-08-18 15:25:26'),
--   (200.00, 'debit card', 'in-store', 2, '2023-08-19 10:00:00'),
--   (300.00, 'PayPal', 'online', 3, '2023-08-20 15:00:00'),
--   (400.00, 'cash', 'in-store', 4, '2023-08-21 10:00:00'),
--   (500.00, 'credit card', 'online', 5, '2023-08-22 15:00:00'),
--   (600.00, 'debit card', 'in-store', 6, '2023-08-23 10:00:00'),
--   (700.00, 'PayPal', 'online', 7, '2023-08-24 15:00:00'),
--   (800.00, 'cash', 'in-store', 8, '2023-08-25 10:00:00'),
--   (900.00, 'credit card', 'online', 9, '2023-08-26 15:00:00'),
--   (1000.00, 'debit card', 'in-store', 10, '2023-08-27 10:00:00');




-- order of execution
-- Clause	Description
-- FROM	Specifies the tables that the query will be executed against.
-- WHERE	Filters the rows that will be returned by the query.
-- GROUP BY	Groups the rows that are returned by the query.
-- HAVING	Filters the groups that are returned by the query.
-- SELECT	Specifies the columns that will be returned by the query.
-- ORDER BY	Sorts the rows that are returned by the query.