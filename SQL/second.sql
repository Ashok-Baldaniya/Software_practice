create database second;
use second;

create table City(cid int not null auto_increment,cityname varchar(50) not null,primary key (cid));

insert into City (cityname) values('surat'),('baroda'),('ahmedabad'),('rajkot'),('bharuch');


create table person(id int not null,name varchar(30) not null,percentage int not null,age int not null,gender varchar(1) not null,city int not null,primary key(id),foreign key (city) references City (cid)); 
insert into person(id,name,percentage,age,gender,city) values(1,"ashok",70,24,"M",1),(2,"vijay",80,21,"M",3),(3,"jinal",60,24,"F",2),(4,"divya",90,23,"F",3);

-- inner join and join are same --  
select p.id,p.name,p.percentage,p.age,p.gender,c.cityname from person p inner join city c on p.city=c.cid;
select p.id,p.name,p.percentage,p.age,p.gender,c.cityname from person p inner join city c on p.city=c.cid where c.cityname="surat" order by p.name;

select * from person p left join city c on p.city=c.cid;


select * from person p right join city c on p.city=c.cid;

select * from person cross join city;
select * from person , city;

create table course(corid int ,corname varchar(30),primary key(corid));
insert into course(corid,corname) values(1,"BCA"),(2,"MBA"),(3,"B.E");













