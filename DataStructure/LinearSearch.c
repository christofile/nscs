#include <stdio.h>
int linear_search(int arr[],int length, int key)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[8]={1, 7, 8, 10, 5, 26, 19};
    int length,key,result;
    length=sizeof(arr)/sizeof(arr[0]);
    
    printf("Please enter the key to be searched:\n");
    scanf("%d",&key);
    result=linear_search(arr, length, key);
    if(result==-1)
        printf("Element is not present in array.\n");
    else
        printf("Element is result at index %d \n",result);

}
