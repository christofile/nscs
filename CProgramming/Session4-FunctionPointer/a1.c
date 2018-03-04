include<stdio.h>

int main()
{

    int x,i=2,temp;
    printf("Please input a positive integer:\n");
    scanf("%d",&x);
    temp=x;
    while(i<=x)
    {

        if(x%i==0)
        {
                if(i==temp)
                {
                        printf("It's a prime integer.\n");
                        break;
                }
                printf("%d ",i);
                x=x/i;
        }
        else
            i++;
    }
    return 0;

}
