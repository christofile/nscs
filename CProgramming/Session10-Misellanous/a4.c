#include <stdio.h>

struct employee
{
    unsigned int day:5;
    unsigned int month:4;
    unsigned int year:12;
};

struct employee emp[10]=
{
    {10,01,2014},
    {07,10,2015},
    {02,10,2017},
    {04,06,2011},
    {12,07,2015},
    {01,07,2010},
    {03,04,2015},
    {04,12,1998},
    {10,01,2011},
    {03,10,2016},
};

int main()
{
    int i,j;
    unsigned int date[10]={0};
    unsigned int temp;
    for(i=0;i<10;i++)
    {
        date[i]=emp[i].year*10000+emp[i].month*100+emp[i].day;
        //printf("%u\n",date[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(date[i]>date[i+1])
            {
                temp=date[i];
                date[i]=date[i+1];
                date[i+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%u\n",date[i]);
    }
    return 0;
}
