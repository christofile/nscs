#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cricketer
{
    int run;
    char name[100];
    int age;
    int match;
    
};

struct cricketer member[4]={
    87,"Lily",20,4,
    85,"Frank",25,5,
    81,"Raynor",21,3,
    94,"Claire",18,7,
};

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}


int main()
{
    int i;
    
    qsort(member,4,sizeof(struct cricketer),compare);
    
    for(i=0;i<4;i++)
        printf("name=%s,average run=%d\n",member[i].name,member[i].run);
    
    return 0;

}
