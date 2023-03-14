create database arithmatic;
use arithmatic;

select 5+6 as total;
select 5-6 as total;
select 5*6 as total;
select 5/6 as total;
select 51%6 as total;

create table student(id int,name varchar(30),pr int);
insert into student(id,name,pr) values(1,"ashok",98),(2,"ajay",78),(3,"ashik",88),(4,"amit",77);

select id,name,pr from student;
select id,name,(pr+2) as Pr from student;

select * from student order by rand();


select pi();
select round(4.4);
select round(4.7);
select round(4.5);
select round(4335.5437,2);

select ceil(2.3);
select ceil(2.7);

select floor(2.3);
select floor(2.7);

select pow(5,3);

select sqrt(144);
select round(sqrt(34));

select rand();
select rand() * 100;
select round(rand() * 100);

select floor(7 + (rand() * 6));
-- give a value between 7 to 12

select floor(1 + (rand() * 5));
-- give a value between 1 to 5 

-- abs-absolute 
select abs(-90.43);

-- sign give three value (-1,0,+1)

select sign(-49); 
select sign(0.0); 
select sign(49); 





