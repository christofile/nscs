#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=(l-1);
    int j;
    
    for(j=l;j<=h-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[j]);
    return i+1;

}

void quickSort(int arr[],int l,int h)
{
    if (l<h)
    {
        int pi = partition(arr,l,h);
        
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,h);
    }

}

int main()
{
    int arr[10],i;
    printf("Please enter all the number of the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting, the array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    quickSort(arr,0,9);
    printf("After sorting, the array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
}
return 0;
}
