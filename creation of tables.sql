#for creation of any database
CREATE DATABASE life;
create database lifes;

#for deletion of any database
drop database lifes;

#for using a particular databse
use life;
#now creating a table
CREATE TABLE student(
id INT PRIMARY KEY,
name varchar(50),
age INT not null
);
INSERT INTO student VALUES(1,"palak",21);
INSERT INTO student VALUES(2,"prisha", 18);
select * from student;

#to check if database already exists
CREATE DATABASE IF NOT EXISTS life;

#for deletion also this exists
#DROP DATABASE IF EXISTS db_name;

#for viewing all tables
SHOW tables;
SHOW DATABASES;

#for printing whole table
SELECT * from student;

#insertion in my table
INSERT INTO student(id,name,age)
VALUES
(3,"priya",22),
(4,"priyanka",23);
