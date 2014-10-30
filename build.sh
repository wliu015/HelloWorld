#!/bin/bash
g++ -o code/HelloWorld.o -c code/HelloWorld.cpp
g++ -o test_case/test_HelloWorld.o -c test_case/test_HelloWorld.cpp
g++ -o test  code/HelloWorld.o test_case/test_HelloWorld.o


ls /home/kissingurami | grep $1
case $? in
        0) echo "Okay."
           exit 0
                ;;
        *) echo "Error."
           exit 2
                ;;
esac

