#include <stdio.h>

struct day
{
    int date;
    int month;
    int year;
}day1,day2;

struct day day1={16,9,1988};

int main()
{
    printf("Please enter the date:\n");
    scanf("%d",&day2.date);
    printf("Please enter the month:\n");
    scanf("%d",&day2.month);
    printf("Please enter the year:\n");
    scanf("%d",&day2.year);
    
    if((day1.date==day2.date)&&(day1.month==day2.month)&&(day1.year==day2.year))
        printf("Equal");
    else
        printf("Unequal");
    
    return 0;

}
