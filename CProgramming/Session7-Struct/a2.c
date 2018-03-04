#include <stdio.h>

typedef struct complex
{
    float real;
    float imagine;
}comnum;

comnum c1,c2;

comnum add(comnum a,comnum b)
{
    comnum temp;
    temp.real=a.real+b.real;
    temp.imagine=a.imagine+b.imagine;
    return temp;
}

int main()
{
    
    comnum sum;
    printf("Please enter real part of complex1:");
    scanf("%f",&c1.real);
    printf("Please enter imagine part of complex1:");
    scanf("%f",&c1.imagine);
    printf("Please enter real part of complex2:");
    scanf("%f",&c2.real);
    printf("Please enter imagine part of complex12:");
    scanf("%f",&c2.imagine);
    
    sum=add(c1,c2);
    printf("The sum of complex number is:%.2f+%.2fi\n",sum.real,sum.imagine);
    
    return 0;

}
