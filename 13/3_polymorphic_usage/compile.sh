#! /bin/bash
g++ -c person.cpp
g++ -c student.cpp
g++ -c app.cpp
g++ person.o student.o app.o -o app