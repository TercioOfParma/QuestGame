all:
		g++	-c	basic.h
		g++	-c	basic.cpp
		g++	-o	Quest	mainQuestGame.cpp	basic.o
		