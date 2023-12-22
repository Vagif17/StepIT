create database Academy;

use master;
use Academy;

drop database Academy

create table Groups(  
 Id int primary key identity(1,1), 
 Name nvarchar(10) NOT NULL UNIQUE, 
 Rating int NOT NULL CHECK (Rating >= 0 AND Rating <=5), 
 Year int NOT NULL CHECK (Year >= 1 AND Year <=5), 
 )


create table Departments(  
 Id int primary key  identity  (1,1) NOT NULL,
 Financing money NOT NULL CHECK (Financing != 0) DEFAULT(0),
 Name nvarchar(100) NOT NULL CHECK (Name != '') UNIQUE, 
 )


create table Faculties( 
 Id int primary key  identity  (1,1) NOT NULL, 
 Dean nvarchar(100) NOT NULL CHECK (Dean != '') UNIQUE,  
 Name nvarchar(100) NOT NULL CHECK (Name != '') UNIQUE, 
 )


create table Teachers( 
 Id int primary key  identity  (1,1) NOT NULL, 
 IsAssistant bit NOT NULL DEFAULT(0), 
 IsProfessor bit NOT NULL DEFAULT(0),
 EmploymentDate date NOT NULL, 
 CHECK(EmploymentDate >= '01.01.1990'), 
 Name nvarchar(100) NOT NULL CHECK (Name != '') UNIQUE, 
 Position nvarchar(MAX) NOT NULL CHECK(Position != ''), 
 Premium money NOT NULL CHECK (Premium != 0) DEFAULT(0), 
 Bid money NOT NULL CHECK (Bid >= 0),  
 SurName nvarchar(MAX) NOT NULL CHECK (SurName != ''),
 SalaryToPremium int NOT NULL, 
 PremiumToSalary int NOT NULL,
 )

drop table Faculties;
drop table Teachers;
drop table Groups;
drop table Departments;


insert into Departments(Financing,Name) values(10000,N'Software Development');
insert into Departments(Financing,Name) values(18000,N'ITE');
insert into Departments(Financing,Name) values(28000,N'Disagner');

insert into Groups(name, Rating, Year) values (N'Math', 4, 3);
insert into Groups(name, Rating, Year) values (N'English', 3, 5);
insert into Groups(name, Rating, Year) values (N'Biology', 1, 2);

insert into Teachers(IsAssistant,IsProfessor,EmploymentDate,Name,Position,Premium,Bid,Surname,SalaryToPremium,PremiumToSalary) values(0,1,N'12.12.2001',N'Kenan',N'Master',20,1200,'Quliev',78,22);
insert into Teachers(IsAssistant,IsProfessor,EmploymentDate,Name,Position,Premium,Bid,Surname,SalaryToPremium,PremiumToSalary) values(1,0,N'05.09.1999',N'Elnur',N'Teacher',180,990,'Babayev',12,88);
insert into Teachers(IsAssistant,IsProfessor,EmploymentDate,Name,Position,Premium,Bid,Surname,SalaryToPremium,PremiumToSalary) values(1,0,N'24.01.2003',N'Magomed',N'Master',90,1080,'Balayev',31,69);

insert into Faculties(Dean,Name) values (N'Magomed',N'Biology');
insert into Faculties(Dean,Name) values (N'Albert',N'Computer Science');
insert into Faculties(Dean,Name) values (N'Vasiliy',N'Enginer');
--1.
select * from  Departments order by Id DESC


--2
select name as GroupName, Rating as GroupRating from Groups

--3
select SurName as Surname,SalaryToPremium  as SalaryToPremiumPercent, PremiumToSalary as PremiumToSalaryPercent from Teachers

--4
select Name as Faculty, Dean as Dean from Faculties

--5
select SurName as Surname from Teachers 
where Bid > 1050 and IsProfessor = 1

--6
select Name as Name from Departments
where Financing < 11000 or Financing > 25000

--7
select * from Faculties
where Name != 'Computer Science'

--8
select Name as Name,SurName as Surname from Teachers
where IsProfessor = 0

--9
select SurName as Surname,Position as Position, Premium as  Premium, Bid as Bid from Teachers
where Premium >= 160 and Premium <= 555 and IsAssistant = 1

--10
select SurName as Surname,Bid as Bid from Teachers
where IsAssistant = 1

--11
select SurName as Surname,Position as Position from Teachers
where EmploymentDate <= '01.01.2000'


--12
select Name as NameOfDepartment from Departments
order by Name

--13
select SurName as Surname from Teachers
where IsAssistant = 1 and Premium + bid < 1200

--14
select Name as GroupName from Groups
where Rating >= 2 and Rating <= 4 and Year = 5

-- 15
select SurName as Surname from Teachers   
where IsAssistant = 1 and Premium < 200 or IsAssistant = 1 and Bid < 550