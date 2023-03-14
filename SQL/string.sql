create database string;
use string;

create table student(id int not null auto_increment primary key,name varchar(30),pr int);
insert into student(name,pr) values("ashok",90),("vijay",70),("anil",80),("vishal",91),("jay",70);

select id,upper(name),pr from student;
select id,ucase(name),pr from student;
-- ucase and upper are same 

select id,lower(name) as name,pr from student;
select id,lcase(name),pr from student;
-- lower and lcase are same 

select id,character_length(name) as length,pr from student;
select id,char_length(name) as length,pr from student;
-- above both are same and length return value in byte

select id,length(name) as length,pr from student;


select id,concat(name,pr) as concat from student;
select concat_ws(" ok ","be","bca","mba","ca") as Name;
select concat_ws(" - ","be","bca","mba","ca") as Name;
-- there first word join other all word (seperator)


--  remove left space
select ltrim("        okokokok       ") as name;

--  remove right space
select rtrim("        okokokok                         ") as name;

--  remove extra space from both side
select trim("        okokokok       ") as name;


-- give position from left side 
select position("ashok" in "hello ashok") as name;

-- same as position buut serching item is seperate by comma
select instr("hello ashok" ,"a") as name;
select instr("hello ashok" ,"sh") as name;


-- locate-(serching word,string,search from index position(opptional)) same as position but this minor differance this give position after 2nd index position
select locate("h","hello ashok",2) as name;

select substring("hello world",3) as name;
select substring("hello world",3,8) as name;
select substring("hello world",-5,3) as name;
select substr("hello world",-5,3) as name;
select mid("hello world",-5,3) as name;
--  substring,substr and mid all are same
-- here count from reverse to 5 index position and take 3 letter from left to right side
-- here this function create dubstring with starting from and ending to given index position of existing string


-- substring_index- return values from given parameter to left side (string,para,which para like 1st,2nd)
select substring_index("hello world","o",2) as name;

-- give a string from left side to given index position
select left("hello how are you",8) as name;

-- give a string from right side to given index position
select right("hello how are you",6) as name;

-- Rpad -to give more length to string here string is 11 in length we want to get it length 22 character so we add another 11 as +
select rpad("hello world",22,"+");

-- Lpad -reverse of rpad
select lpad("hello world",22,"+");

select space(100) as name;
-- here it is  add 100 space alter

-- reverse - to reverse a string
select reverse("helo world");

-- replace - to replace string with given value 
select replace("hello world","llo","ok");

-- strcmp - string compare  
select strcmp("hello world","Hello world");
select strcmp("hello world","Hello");
select strcmp("hello","Hello world");

select field(5,0,1,2,3,4,5,6,7) as name;
select field("ram","shyam","ram","mohan","raghav") as name;
-- to find string from mant string give first string as a to be find string

-- find in set - it find string from givan group string (similr to field)
-- note: it is neccesary to not provide a space in string group for correct result ("ashok , ravi , ramesh")
select find_in_set("ashok","ravi,ramesh,ashok,dipak");

-- format : work with nnumeric value
select format(255.453,2);

-- hex : give hexadedcimal form of string
select hex("hello world");








