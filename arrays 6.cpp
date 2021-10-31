#include <stdio.h>
int main()
{
	int a[8]={3,25,13,6,35,8,14,45};
	int i,j,temp=0;
	//Original
	printf("Original Array is: \n");
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	//Modifying
	for(i=0;i<8;i++)
	{
		if(a[i]%5==0)
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
	}
	//New
	printf("\nModified Array is: \n");
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
		
	
	
	
	
	
