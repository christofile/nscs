/*************************************************
* Description: Write a C program to print the given triangular number pattern using loop 
* Author     : Lily Liang
*************************************************/
#include <stdio.h>
int main(void)
{
	int num,i,j;
	printf("Please enter a natural number:");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("This is not a natural number.\n");
	}
	else
	{
		for(i=1;i<=num;i++)
		{	
			for(j=0;j<i;j++)
			{
				printf("%d",i);
			}
			printf("\n");
		}
	}	
	return 0;
}
