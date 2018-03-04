#include <stdio.h>
#include <string.h>


int atoi(string)
        register char *string;	/* String of ASCII digits, possibly
                             * preceded by white space.  For bases
                             * greater than 10, either lower- or
                             * upper-case digits may be used.
                             */
    {
        register int result = 0;
        register unsigned int digit;
        int sign;
        
        /*
         * Skip any leading blanks.
         */
        
        while (isspace(*string)) {
            string += 1;
        }
        
        /*
         * Check for a sign.
         */
        
        if (*string == '-') {
            sign = 1;
            string += 1;
        } else {
            sign = 0;
            if (*string == '+') {
                string += 1;
            }
        }
        
        for ( ; ; string += 1) {
            digit = *string - '0';
            if (digit > 9) {
                break;
            }
            result = (10*result) + digit;
        }
        
        if (sign) {
            return -result;
        }
        return result;
    }


int main( )
{
    char str1[100];
    int a;
    printf("Please enter a numberic string:\n");
    gets(str1);
    a=atoi(str1);
    printf("%d",a);
    
    return 0;
}
