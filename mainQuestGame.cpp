#ifndef INCLUDE_LOCK // this means when we graduate to more files it should mean there wont be issues with including
#include "basic.h"
#define INCLUDE_LOCK
#endif

using namespace std; //using it cuz look at all those damn cout statements. this is just for now, we can fix it later. 
int main(int argc, char* argv[])
{
	init(argv); //address to an address so we can access the entire array
	string input; //given string because this is what works. if you have another way be sure to show!
	bool flag = false;
	

    
    cout<<"You wake up and go outside, do you go left or right?\n";
    
    //puts this in a loop incase invalid input was given, could be made into a function surely. 
	do{
    cout<<"\n1. Left\n"; //we want more than just left and right surely, so this should be different
    cout<<"\n2. Right\n";
    
	cin>>input;
    if(input == "1"|| input == "2") 
    	flag = true;
    else 
		cout<<"The hell you doing? Input numbers only!";
    
    
}while(flag == false);

if(input == "1")
	 cout<<"Continuing story #1. . . .";
 else if (input == "2" )
	 cout<<"Continuing story #2. . . .";
	 
	 return 0;
}


