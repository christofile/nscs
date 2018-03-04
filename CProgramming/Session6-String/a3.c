#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100],str2[100],strall[200];
    int i,len;
    
    printf("Enter a string1: ");
    gets(str1);
    
    printf("Enter a string2: ");
    gets(str2);
    
    
    for(i=0;i<strlen(str1);i++)
    {
        strall[i]=str1[i];
    }
    
    len=strlen(str1);
    
    for(i=0;i<strlen(str2);i++)
    {
        strall[i+len]=str2[i];
    }
    puts(strall);
    return 0;
}
