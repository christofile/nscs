#include <stdio.h>

int main()
{
    unsigned int num1,num2;
    unsigned int rsnum=0,lsnum=0,andnum=0,notnum=0,xornum=0,ornum=0;
    printf("Please enter an integer number 1:");
    scanf("%u",&num1);
    printf("Please enter an integer number 2:");
    scanf("%u",&num2);
    
    rsnum=num1>>1;
    lsnum=num2<<1;
    andnum=num1&num2;
    notnum=~num1;
    xornum=num1^num2;
    ornum=num1|num2;
    
    printf("num1 0x%x right shfit 1 bit is 0x%x\n",num1,rsnum);
    printf("num2 0x%x left shfit 1 bit is 0x%x\n",num2,lsnum);
    printf("num1 0x%x and num2 0x%x is 0x%x\n",num1,num2,andnum);
    printf("not num1 0x%x is 0x%x\n",num1,notnum);
    printf("num1 0x%x xor num2 0x%x is 0x%x\n",num1,num2,xornum);
    printf("num1 0x%x or num2 0x%x is 0x%x\n",num1,num2,ornum);
    
    return 0;
}
