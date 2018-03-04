/*************************************************
* Description: Write a program to check whether input alphabet is vowel or not using if-else statement 
* Author     : Lily Liang
*************************************************/
#include <stdio.h>
int main(void)
{
	char alpha;
	printf("Please enter an alphabet:");
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
		printf("This is a vowel.\n");
	else
		printf("This is not a vowel.\n");
	return 0;
}
