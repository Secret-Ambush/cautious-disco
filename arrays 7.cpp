#include <stdio.h>
int main()
{
	int i,j,temp=0;
	int a[8]={3,21,5,6,14,8,14,3};
	
	//original array
	printf("Original array: \n");
	i=0;
	while(i<8)
	{
		printf("%d \t",a[i]);
		i++;
	}
	
	//modifying array
	i=0;
	while(i<8)
	{
		if(a[i]%7==0)
		{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;
			i++;
		}
		i++;
	}
	
	//new array
	i=0;
	printf("\nNew array: \n");
	while(i<8)
	{
		printf("%d \t",a[i]);
		i++;
	}
	
	return 0;
}
