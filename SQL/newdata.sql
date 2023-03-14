create database Practice;

use practice;

create table emp(empid int auto_increment primary key,fname varchar(20),lname varchar(20));

select * from emp;


alter table emp add column gender enum('M','F') after lname;

insert into emp (fname,lname,gender) values ('ashok','baldaniya','G');

