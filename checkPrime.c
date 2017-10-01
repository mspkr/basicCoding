#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc==2){
		int number = atoi(argv[1]);
		int prime = 1;
		for(int i=2; i<=number/2;i++)
			if(number%i==0){
				prime = 0;
				break;
			}
		if(prime==1)
			printf("Prime Number\n");
		else
			printf("Not Prime Number\n");
	}
	return 0;
}