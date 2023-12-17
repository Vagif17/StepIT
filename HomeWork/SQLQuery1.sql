create database Academy;

use Academy;
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
 Name nvarchar(100) NOT NULL CHECK (Name != '') UNIQUE, 
)


create table Teachers(
 Id int primary key  identity  (1,1) NOT NULL,
 EmploymentDate date NOT NULL, CHECK(EmploymentDate >= '01.01.1990'),
 Name nvarchar(100) NOT NULL CHECK (Name != '') UNIQUE, 
 Premium money NOT NULL CHECK (Premium != 0) DEFAULT(0), 
 Salary money NOT NULL CHECK (Salary >= 0),
 SurName nvarchar(MAX) NOT NULL CHECK (SurName != '')
)



insert into Groups(name, Rating, Year) values (N'Vagif', 5, 3);
insert into Departments(Financing,Name) values(25,N'Tofiq');
insert into Faculties(Name) values(N'Rashid');
insert into Teachers(EmploymentDate,Name,Premium,Salary,Surname) values(N'12.12.2001',N'Kenan',20,40,'Quliev');



select*from Faculties
select*
from Teachers
select *from Departments
select *
from Groups