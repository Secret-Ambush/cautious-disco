#include <stdio.h>

int main()
{
	int i,a1[5];
	printf("Example of 1D Array and print in reverse order \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Print array data \n");
	for(i=4;i>=0;i--)
	{
		printf("%d ",a1[i]);
	}
	return 0;
}
