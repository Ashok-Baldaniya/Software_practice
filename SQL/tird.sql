create database third;
use third;

create table course(crid int not null primary key,crname varchar(30));
insert into course(crid,crname) values(1,"BE"),(2,"BCA"),(3,"BCOM"),(4,"BE"),(5,"BHMS");

create table city(cid int not null primary key,cname varchar(30));
insert into city(cid,cname) values(1,"SURAT"),(2,"VAPI"),(3,"RAJKOT"),(4,"BARODA"),(5,"AHMEDABAD");

create table person(id int not null primary key,name varchar(30),age int,city int ,course int ,foreign key(city) references city(cid),foreign key(course) references course(crid));
insert into person(id,name,age,city,course) values(1,"ashok",24,2,4),(2,"vishal",22,1,3),(3,"sahil",19,3,2),(4,"vinod",25,1,4),(5,"ajay",21,2,3);

select p.id,p.name,p.age,c.cname as city,cr.crname as Course from person p inner join city c on p.city=c.cid inner join course cr on p.course=cr.crid;
select * from person p inner join city c on p.city=c.cid inner join course cr on p.course=cr.crid;
select p.id,p.name,p.age,c.cname as city,cr.crname as Course from person p inner join city c on p.city=c.cid inner join course cr on p.course=cr.crid;
select p.id,p.name,p.age,c.cname as city,cr.crname as Course from person p inner join city c on p.city=c.cid inner join course cr on p.course=cr.crid where c.cname="surat";










