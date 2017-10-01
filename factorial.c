#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	if(argc>=2){

		int a = atoi(argv[1]);
		int factorial=1,i;
		for(i=a;i>1;i--)
			factorial=factorial*i;
		printf("%d\n",factorial);
	
	}
	return 0;
}