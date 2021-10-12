#include <stdio.h>

int main()
{
    int arr[20];
    printf("Enter the array : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[2*i+1]);
    }
    int n, num1, num2;
    printf("Enter number to be placed : ");
    scanf("%d", &n);
    printf("Numbers between which the number needs to be placed : ");
    scanf("%d %d", &num1, &num2);
    for(int i=0; i<10; i++)
    {
        if(arr[2*i+1]==num1 && arr[2*i+3]==num2)
        {
            arr[2*i+2] = n;
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ", arr[2*i+1]);
        if(arr[2*i+1]==num1 && arr[2*i+3]==num2)
        {
            printf("%d ", arr[2*i+2]);
        }
    }
    return 0;
}