#ifndef INCLUDE_LOCK // this means when we graduate to more files it should mean there wont be issues with including
#include "basic.h"
#define INCLUDE_LOCK
#endif

#define BANNER_SIZE_COLUMNS 80
#define BANNER_SIZE_ROWS 22


int init(char **args)
{
	SetConsoleTitle("The Quest");
	chdir("data");//thank god for unistd
	char *bannerstr = (char *)malloc(sizeof(char) * (BANNER_SIZE_COLUMNS * BANNER_SIZE_ROWS));
	char *bannerstrbegin = bannerstr; //holds the beginning address of banner string
	FILE *banner = fopen("banner.txt", "r");
	chdir("...");
	if(!banner)
	{
			std::cout << "FATAL ERROR : Banner is NULL " << std::endl;
			std::cin.get();
			exit(1);//this will be useful for a debugger
	}
	

	fread(bannerstr, sizeof(char), BANNER_SIZE_COLUMNS * BANNER_SIZE_ROWS, banner); //should read the entire file until EOF in the case of ours
	/*
	
	If you make the file 2 bytes bigger or 1 byte smaller than it actually is crazy stuff happens:
	
	smaller : the amount you make smaller is outputted as NULL Characters
	bigger : it outputs something reminiscent of the ASCII table but isn't
	
	*/
	std::cout << bannerstr << std::endl;
	std::cin.get();
	clear(BANNER_SIZE_ROWS);
	fclose(banner);
	free(bannerstr);

}
void clear(int rows)
{
	int i;
	
	for(i = 0; i < rows; i++)
	{
		std::cout << std::endl;
	
	}

}
