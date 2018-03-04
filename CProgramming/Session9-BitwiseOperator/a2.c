#include <stdio.h>

unsigned int count1bits(unsigned int num)
{
    unsigned int mask=1;
    int bits=0,all1bits=0;
    
    bits=sizeof(unsigned int)*8;
    
    for (int i=0;i<bits;i++,mask<<=1)
    {
        if(num & mask)
            all1bits++;
    }
    return all1bits;
}


int main()
{
    unsigned int num,all1bits;
    printf("Please enter an integer number:");
    scanf("%u",&num);
    all1bits=count1bits(num);
    printf("The number of 1 bit is %u\n",all1bits);
    return 0;
}
