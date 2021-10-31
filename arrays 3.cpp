#include <stdio.h>

int main()
{
	int number[8]={3,5,4,20,70,50,83,91};
	int i;
	
	/*original array*/
	printf("Number array selected is: \n");
	for(i=0;i<8;i++)
	{
		printf("%d \t",number[i]);
	}
	
	/*changing the array */
	for(i=0;i<8;i++)
	{
		if (i%2!=0)
		{
			number[i]=number[i]*2;
		}
	}
	
	/*Modified array*/
		printf("\n Number array modified is: \n");
	for(i=0;i<8;i++)
	{
		printf("%d \t",number[i]);
	}
	
	return 0;
}
