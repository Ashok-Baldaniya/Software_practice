create database five;
use five;

create table course(cid int primary key,cname varchar(30));
insert into course(cid,cname) values(1,"BE"),(2,"BCA"),(3,"BCOM");


create table student(id int primary key,name varchar(30),age int,field int,foreign key(field) references course(cid));
insert into student(id,name,age,field) values(1,"ashok",24,2),(2,"vinod",22,3),(3,"vijay",20,1),(4,"sahil",23,2);

select name from student where field = (select cid from course where cname="BE");
select name from student where field in (select cid from course where cname IN ("BE","BCOM"));

-- if any single name with BE course then return all name   
select name from student where exists (select cid from course where cname IN ("BE"));
select name from student where exists (select cid from course where cname IN ("BEZ"));

select name from student where not exists (select cid from course where cname IN ("BEZ"));
select name from student where exists (select cid from course where cname IN ("BEZ"));


select cid from course where cname="BE";
select cid from course where cname in ("BE","BCA");




