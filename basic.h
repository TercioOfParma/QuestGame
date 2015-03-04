#include <iostream>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h> 
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

/*
	Function of this file:
	Holds function prototypes for some basic functions (init, deinit, probably some more later on)
	Basic includes that the majority of the program will need
	Maybe struture definitions later on


*/


int init(char **args); //the parameter won't be used yet although I can see it being useful to have 
int deinit(int errorcode);
void clear(int rows);