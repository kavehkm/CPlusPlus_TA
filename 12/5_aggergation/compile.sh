#! /bin/bash

g++ -c date.cpp
g++ -c person.cpp
g++ -c app.cpp
g++ date.o person.o app.o -o app