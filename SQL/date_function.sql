create database date;
use date;

create table student(id int auto_increment primary key,name varchar(30),dob date);
insert into student(name,dob) values("ashok","2022-09-24"),("vishal","2022-05-22"),("jay","2017-04-24"),("amit","2021-09-14");

select id ,name,dob,year(dob) as year from student;
select id ,name,dob,monthname(dob) as month from student;
select id ,name,dob,month(dob) as month from student;


select current_date() as Date;
select curdate() as Date;
-- give a date of server and both function are same

select sysdate() as Date_Time;
select now() as Date_Time;
-- both function are same

select date("2022-09-07 09:22:08") as Date;
-- select date from date and time

select month("2022-09-07 09:22:08") as Date;
-- give a month from full date 

select monthname("2022-09-07 09:22:08") as Month;
-- give month name

select year("2022-09-07 09:22:08") as Year;
-- give year from date

select quarter("2022-03-10 09:20:09") as date;
-- there is 4 quarter jan-mar-> 1,apr-jun-> 2,july-sep-> 3,oct-dec-> 4 

select day("2022-03-10 09:20:09") as date;
select dayofmonth("2022-03-10 09:20:09") as date;
-- give a date of day and both are same

select dayname("1998-10-08") as day_name;
select dayofweek("1998-10-08") as day;
select dayofyear("1998-10-08") as day_count;
select week("1998-10-08") as week;
select weekday("1998-10-08") as week_day;
select yearweek("1998-10-08") as year_week;
select last_day("1998-10-08 09:30:09") as end_date;
select extract(month from "1998-10-08 09:30:09") as date;
select extract(minute from "1998-10-08 09:30:09") as date;
select extract(microsecond from "1998-10-08 09:30:09") as date;

-- give a name of the day , give a number of day ,give days of year from 365 days ,give week count ,give day count of week 

select adddate("2022-11-10", interval 15 day) as date;
select adddate("2022-11-10", interval 1 month) as date;
select date_add("2022-11-10", interval 1 month) as date;
-- date add and add date both are same

-- to create a date only for january
select makedate(2020,8);

-- reverse of add date(subtract)
select subdate("2022-11-10", interval 15 day) as date;

select datediff("2022-11-10","1998-10-08") as Day;

select to_days("2022-11-10") as Day;
select from_days("689000") as Day;

select date_format("2022-09-08", "%Y") as date;
select date_format("2022-09-08", "%y") as date;


