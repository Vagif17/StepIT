USE Academy

CREATE TABLE People(
 [Id] INT PRIMARY KEY IDENTITY(1,1),
 [Name] NVARCHAR(40) NOT NULL,
 [Surname] NVARCHAR(40) NOT NULL,
)

INSERT INTO People (Name,Surname) VALUES (N'Vagif',N'Aliev')
INSERT INTO People (Name,Surname) VALUES (N'Ibragim',N'Aliev')

SELECT * FROM People