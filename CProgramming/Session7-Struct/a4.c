#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[20];
    int year;
    int month;
    int date;
};

struct employee epl[20]={
    1,"lily",2011,7,1,
    2,"Raynor",2012,3,5,
    3,"Aaron",2014,4,9,
    4,"Donnie",2017,1,1,
    5,"Frank",2017,7,1,
    
};

int date[3];
char tenure3epl[20][20];

int main()
{
    printf("Please enter the year:\n");
    scanf("%d",&date[0]);
    printf("Please enter the month:\n");
    scanf("%d",&date[1]);
    printf("Please enter the date:\n");
    scanf("%d",&date[2]);
    
    for(int i=0;i<20;i++)
    {
        if((date[0]-epl[i].year)>3)
        {
            strcpy(tenure3epl[i],epl[i].name);
            continue;
        }
        else if((date[0]-epl[i].year)==3)
        {
           if((date[1]-epl[i].month)>3)
           {
               strcpy(tenure3epl[i],epl[i].name);
               continue;
           }
            else if((date[1]-epl[i].month)==3)
            {
                if(date[0]>=epl[i].date)
               {
                   strcpy(tenure3epl[i],epl[i].name);
                   continue;
               }
            }
        }
            
    }

    for(int j=0;j<20;j++)
    {
        if(strlen(tenure3epl[j])>0)
            printf("%s\n",tenure3epl[j]);
    }
    return 0;

}
