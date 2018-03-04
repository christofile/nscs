/*************************************************
* Description: Write a program to find factorial of a number using for loop
* Author     : Lily Liang
*************************************************/
#include <stdio.h>
int main(void)
{
	int num=0,fac=1;
	printf("Please enter a natural number:");
	scanf("%d",&num);
	if(num<=0)
		printf("This is not a natural number.\n");
	else
	{
		while(num>1)
		{
			fac*=num;
			num--;
		}
		printf("%d\n",fac);	
	}

	return 0;
}
