#! /bin/bash

g++ -c product.cpp
g++ -c invoice.cpp
g++ -c app.cpp
g++ product.o invoice.o app.o -o app