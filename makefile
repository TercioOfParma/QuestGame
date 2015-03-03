all:
		g++	-c	basic.h
		g++	-c	basic.cpp
		g++	-o	Quest	main.cpp	basic.o
		