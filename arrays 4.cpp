#include <stdio.h>

int main()
{
	int number[7]={10,20,30,40,50,60,70};
	int i,j,temp=0;
	
	printf("Array given is: \n");
	i=0;
	while (i<7)
	{
		printf("%d\t",number[i]);
		i++;
	}
	printf("\n");
	
	j=number[0];
	i=0; 
	while (i<4)
	{
		temp=number[i];
		number[i]=number[i+4];
		number[i+4]=temp;
		i++;
	}
	
	
	printf("New array is: \n");
	while (i<7)
	{
		printf("%d\t",number[i]);
		i++;
	}
	return 0;

}
