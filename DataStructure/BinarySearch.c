#include <stdio.h>

int binary_search(int arr[],int l,int r, int x)
{
    if (r>=l)
    {
        int mid = l+(r-l)/2;
        
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return binary_search(arr,l,mid-1, x);
        
        return binary_search(arr,mid+1,r, x);
    }
    return -1;
}

int main()
{
    int arr[]={1,7,10,16,20,26};
    int length,key,result;
    length=sizeof(arr)/sizeof(arr[0]);
    
    printf("Please enter the key to be searched:\n");
    scanf("%d",&key);
    result=binary_search(arr, 0, length-1, key);
    if(result==-1)
        printf("Element is not present in array.\n");
    else
        printf("Element is result at index %d \n",result);

}

