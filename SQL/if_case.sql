create database ifcase;
use ifcase;

create table student(id int,name varchar(30),pr int);
insert into student(id,name,pr) values(1,"ashok",98),(2,"vijay",32),(3,"sahil",60),(4,"anil",32),(5,"ajay",78);

select name,pr, if(pr>=33,"pass","fail") as Result from student;

select name,pr,
case
when pr>=80 and pr<=100 then "1st rank"
when pr>=45 and pr<80 then "2nd rank"
when pr>=33 and pr<45 then "3rd rank"
when pr<33 then "fail"
else "enter valid pr"
end as result
from student;

SET SQL_SAFE_UPDATES = 0;
-- if any thing not update then it is used 

update student set
pr = (case id
when 2 then 40
when 4 then 79
end)
where id in (2,4);