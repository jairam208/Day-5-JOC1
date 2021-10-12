#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter the array : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n, found = 0, pos;
    printf("Enter number to be eliminated : ");
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        if(arr[i]==n)
        {
            found = 1;
            pos = i;
            break;
        }
    }
    if(found==1)
    {
        for(int i=pos; i<9; i++)
        arr[i] = arr[i + 1];
    }
    for(int i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}