#include <stdio.h>

unsigned int CountMinBits(unsigned int num)
{
    unsigned int mask=0x80000000;
    int bits=0,minbits=0;
    
    bits=sizeof(unsigned int)*8;
    
    for (int i=0;i<bits;i++,mask>>=1)
    {
        if(num & mask)
        {
            minbits=bits-i;
            break;
        }
    }
    return minbits;
}


int main()
{
    unsigned int num,minbits;
    printf("Please enter an integer number:");
    scanf("%u",&num);
    minbits=CountMinBits(num);
    printf("The minmum number of bits to store this integer is %u\n",minbits);
    return 0;
}
