/*************************************************
* Description: Write a program to find sum of natural numbers from 1 to n using while loop
* Author     : Lily Liang
*************************************************/
#include <stdio.h>
int main(void)
{
	int num=0;
	printf("Please enter a natural number:");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("This is not a natural number.\n");
	}
	else
	{
		do
		{
			printf("%d\n",num);
			num--;
		}while(num>0);
	}	
	return 0;
}
