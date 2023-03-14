use student;
SET SQL_SAFE_UPDATES = 0;

create table emp(name varchar(30),age int,gender varchar(10),salary int);
insert into emp(name,age,gender,salary) values('amir',19,'male',20000),('aaru',20,'female',21000),('vishal',21,'male',22000),('vaishali',23,'female',25000),('montu',18,'male',19000);

create table person(id int,name varchar(30),age int,dob varchar(30),city varchar(30));
insert into person(id,name,age,dob,city) values(1,"ashok",19,"1998-10-08","surat"),(2,"jay",29,"1988-12-07","baroda"),(3,"rakesh",21,"1995-07-08","vapi"),(4,"vipul",18,"1999-11-04","bharuch"),(5,"mahesh",21,"1996-05-23","ahmedabad");
insert into person(id,age,dob,city) values(6,19,"1978-10-04","surat");



select id as ID,name as "Student name" from person;
select * from person;
select id,name from person where age<21;
select * from person where id=131;

select * from person where age>18 and age<21;
select id,phone from person where age>18 and age<21;
select id,phone from person where not age>18 and age<21;

select id,phone from person where age>18 and id<120;

select id,phone from person where age>24 or age<20;

select * from person where age in(19,20);
select * from person where age not in(19,21);


select * from person where age between 18 and 21;
select id,name,age from person where age between 18 and 21;
select id,name,age from person where age not between 20 and 21;
select * from person where name between "a" and "k";

select * from person where city like "b%";
select * from person where binary city like "b%";
select * from person where city like "b%" or name like "a%";
select * from person where city not like "b%";
select * from person where city like "%d";
select * from person where city not like "%d";
select * from person where city like "%ad%";
select * from person where city not like "%ad%";
select * from person where city like "b%h";
select * from person where city not like "b%h";
select * from person where city like "_a%";
select * from person where city not like "_a%";
select * from person where city like "__a%";
select * from person where city not like "__a%";
select * from person where city like "_ha%";
select * from person where city not like "_ha%";
select * from person where city like "_ha";
select * from person where city not like "_ha";

select * from person where name regexp "ok$";
select * from person where name regexp "[hk]$";
select * from person where name regexp "^as";
select * from person where name regexp '[amk]';
select * from person where name regexp '[amk]e';
select * from person where name regexp '^[am]';
select * from person where name regexp '[a-z]k';
select * from person where name regexp '^ashok|sh$';
select * from person where name regexp 'ak';

select * from person order by dob;
select * from person order by name,city;
select * from person order by name desc;
select * from person where city='vapi' order by name asc;

select city from person;
select distinct city from person;
select distinct age from person order by age;

select * from person where name is null;
select * from person where name is not null;

select * from person where age>20 limit 2;
select * from person where age>20 limit 2,3;
-- ahi age 20 thi upar hoy aeva 2 record mukine pachina 3 batvshe (offset,limit) --   

select * from person where city='surat' order by age limit 2;
select * from person limit 3,4;


select count(salary) from emp where age>19; 
select count(name) from emp;
select count(distinct age) from emp;

select max(salary) from emp;
select min(salary) from emp;

select sum(salary) as Total from emp;
select sum(salary) from emp;

select avg(salary) from emp;
select avg(salary) as average from emp;

update emp set salary=26000 where name='vishal';
update emp set gender='male' where name in('aaru','vaishali');
update emp set gender='male';

commit;

update emp set gender='female';

rollback;

delete from emp where salary=24000;
-- SET SQL_SAFE_UPDATES = 0; it is neccesory for this action --  













