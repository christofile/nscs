
#include <stdio.h>

int main()
{

    char str[1000],ch;
    int i,count=0;
    
    printf("Enter a string:");
    gets(str);
    
    printf("Enter a charater:");
    ch=getchar();
    
    for(i=0;i<strlen(str);i++)
    {
        if(ch==str[i])
            count++;
    }
    
    printf("The frequency of charater is %d",count);
    return 0;
    
