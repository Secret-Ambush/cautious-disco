#include <stdio.h>
int main()
{
	int a[4]={10,20,30,40};
	int i,j,temp=0;
	printf("Original Array is: \n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	for(i=1;i<4;i++)         
	{
		temp=a[i];
		a[i]=a[i-1];
		a[i-1]=temp;
	}
	
	printf("Modified Array is: \n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;

}
