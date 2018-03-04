#include <stdio.h>
#include <string.h>

void xgets(char *str)
{
    scanf("%[^\n]s",str);
}

void xputs(char *str)
{
    printf("%s",str);
}

int main( )
{
    char str1[100];
    printf("Please enter a string:\n");
    //gets(str1);
    xgets(str1);
    xputs(str1);
    return 0;
}
