Object-relational mapping
Project done during Full Stack Software Engineering studies at ALX. It aims to learn about how to connect to a MySQL database from a Python script, what ORM means and how to map a Python Class to a MySQL table.

Technologies
MySQL 8.
MySQLdb, version 2.0.x.
sqlalchemy, version 1.4.x.
Python Scripts are written with Python 3.8.
Tested on Ubuntu 20.04 LTS.
Task 1 Example
guillaume@ubuntu:~/0x0F$ cat 0-select_states.sql
-- Create states table in hbtn_0e_0_usa with some data
CREATE DATABASE IF NOT EXISTS hbtn_0e_0_usa;
USE hbtn_0e_0_usa;
CREATE TABLE IF NOT EXISTS states ( 
    id INT NOT NULL AUTO_INCREMENT, 
    name VARCHAR(256) NOT NULL,
    PRIMARY KEY (id)
);
INSERT INTO states (name) VALUES ("California"), ("Arizona"), ("Texas"), ("New York"), ("Nevada");

guillaume@ubuntu:~/0x0F$ cat 0-select_states.sql | mysql -uroot -p
Enter password: 
guillaume@ubuntu:~/0x0F$ ./1-filter_states.py root root hbtn_0e_0_usa
(4, 'New York')
(5, 'Nevada')
guillaume@ubuntu:~/0x0F$ 
Files
All the following files are scripts of MySQL:
