#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int i,len,vowel=0,consonants=0,digits=0,ws=0;
    
    printf("Enter a string: ");
    gets(str);
    
    len=strlen(str);
    
    for(i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowel++;
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            consonants++;
        else if(str[i]>=0&&str[i]<=9)
            digits++;
        else if(str[i]==' ')
            ws++;
            
    }
    
    printf("Vowels: %d",vowel);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", ws);
    
    return 0;

}
