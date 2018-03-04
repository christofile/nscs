/*************************************************
* Description: Write a program which accepts year as the input. check whether the entered year is a leap year or not  (a year is leap if it is divisible by 4 and divisible by 100 or 400.) and display it.
Accept the month number from user and display the number of days in the month.

* Author     : Lily Liang
*************************************************/
#include <stdio.h>
int main(void)
{
	int year=1970,month=1;
	printf("Enter the input year : ");
	scanf("%d",&year);
	if((year%400==0)||((year%4==0)&&(year%100!=0)))
		printf("%d is a leap year.\n",year);
	else
		printf("%d is not a leap year.\n",year);

	printf("Enter the input month(1-12): ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
                        printf("Jan has 31 days.\n");
                        break;
                case 2:
                {       
			if((year%400==0)||((year%4==0)&&(year%100!=0)))
                        	printf("Feb has 29 days.\n");
			else
				printf("Feb has 28 days.\n");
			break;
		}
                case 3:
                        printf("Mar has 31 days.\n");
                        break;
                case 4:
                        printf("Apr has 30 days.\n");
                        break;
                case 5:
                        printf("May has 31 days.\n");
                        break;
		case 6:
                        printf("Jun has 30 days.\n");
                        break;
                case 7:
                        printf("Jul has 31 days.\n");
                        break;
                case 8:
                        printf("Aug has 31 days.\n");
                        break;
                case 9:
                        printf("Sep has 30 days.\n");
                        break;
                case 10:
                        printf("Oct has 31 days.\n");
                        break;
		case 11:
                        printf("Nov has 30 days.\n");
                        break;
                case 12:
                        printf("Jan has 31 days.\n");
                        break;

		default:
			break;
	}

	return 0;
}
