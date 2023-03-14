create database six;
use six;

--  union all-display record with duplication entry also ,  union-not display duplicate record  ,in this colom number and datatype should be same

create table student(id int,name varchar(30),city varchar(30));
insert into student(id,name,city) values(1,"ashok","surat"),(2,"anil","bharuch"),(3,"ajay","vapi");

create table teacher(id int,name varchar(30),city varchar(30));
insert into teacher(id,name,city) values(1,"rakesh","surat"),(2,"kaushal","bharuch"),(3,"chintan","vapi");

create table city(cid int, cname varchar(30));
insert into city(cid,cname) values(1,"surat"),(2,"vapi"),(3,"baroda"),(4,"ahmedabad");

select name,city from student union select name,city from teacher;





