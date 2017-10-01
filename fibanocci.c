#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if(argc==2){
		int a = atoi(argv[1]);
		int f=0,s=1,temp;
		if(a>0)
			printf("%d\t",f);
		if(a>1)
			printf("%d\t",s);
		for(int i=2;i<a;i++)
		{
			temp = f;
			f = s;
			s = temp+s;
			printf("%d\t",s);
		}
		printf("\n");
	}
	return 0;
}