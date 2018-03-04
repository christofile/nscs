#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int i,len;
    
    printf("Enter a string: ");
    gets(str);
    
    len=strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            printf("not a palindrome");
            break;
        }
            
    }
    
    if(i==len)
        printf("palindrome");
    
    return 0;

}
