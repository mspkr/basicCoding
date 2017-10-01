#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc==2){
		int a = atoi(argv[1]);
		if(a%2==0)
			printf("Even Number\n");
		else
			printf("Odd Number\n");
	}
	return 0;
}