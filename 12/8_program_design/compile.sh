#! /bin/bash
g++ -c roster.cpp
g++ -c course.cpp
g++ -c schedule.cpp
g++ -c student.cpp
g++ -c registrar.cpp
g++ -c app.cpp
g++ roster.o schedule.o course.o student.o registrar.o app.o -o app