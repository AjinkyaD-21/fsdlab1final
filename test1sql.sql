create database elections;
use elections;
CREATE TABLE election (
  Eid INT NOT NULL PRIMARY KEY,
  election_name VARCHAR(255) NOT NULL,
  election_date DATE NOT NULL
);
