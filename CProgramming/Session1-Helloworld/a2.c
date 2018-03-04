#include <stdio.h>

int main()
{
	float fd,cd;
	printf("Please enter the Fahrenheit degrees:");
	scanf("%f",&fd);
	cd=(fd-32)*5/9;
	printf("Centigrade degree is %f\n",cd);
	return 0;
}
