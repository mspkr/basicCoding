#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc==2){
		int year = atoi(argv[1]);
		if(year%400==0)
			printf("Leap year\n");
		else if(year%100 == 0)
			printf("Not Leap year\n");
		else if(year%4==0)
			printf("Leap year\n");
		else
			printf("Not Leap year\n");
	}
	return 0;
}