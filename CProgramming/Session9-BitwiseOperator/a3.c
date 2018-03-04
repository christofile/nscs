#include <stdio.h>

unsigned int SwapNibbles(unsigned int num)
{
    unsigned int numbyte1,numbyte2,swapnum;

    numbyte1=num>>4;
    numbyte2=num<<4;
    swapnum=numbyte1+numbyte2;

    return swapnum;
}


int main()
{
    unsigned int num,swapnum;
    printf("Please enter an integer number:");
    scanf("%u",&num);
    swapnum=SwapNibbles(num);
    printf("The integer number after swapping nibbles is %u\n",swapnum);
    return 0;
}
