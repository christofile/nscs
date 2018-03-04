#include <stdio.h>

unsigned int reverse(unsigned int num)
{
    unsigned int mask1=0x80000000,mask2=1,reversenum=0;
    int bits=0;
    
    bits=sizeof(unsigned int)*8;
    
    for (int i=0;i<bits;i++,mask1>>=1)
    {
        if(num & mask1)
        {
            reversenum|=mask2;
            mask2<<=1;
        }
        else
        {
            mask2<<=1;
        }
    }
    return reversenum;
}


int main()
{
    unsigned int num,reversenum;
    printf("Please enter an integer number:");
    scanf("%u",&num);
    reversenum=reverse(num);
    printf("The reverse number is %u\n",reversenum);
    return 0;
}
