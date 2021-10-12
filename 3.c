#include <stdio.h>

int main()
{
    int arr[]={2,6,10,14,18,10,3,7};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("The twins present are : ");
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(arr[i]==arr[j])
            printf("%d ", arr[j]);
        }
    }
    return 0;
}