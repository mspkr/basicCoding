#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[] )  {
	int a[100];
	int n = argc;
	int i;
	printf("%d\n",n);
	for (i = 1; i < n; i++)
		a[i-1]=atoi(argv[i]);
	for (i = 0; i < n-1; ++i)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
return 0;
}