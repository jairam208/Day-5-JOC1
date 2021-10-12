#include <stdio.h>

int main()
{
    int arr[]={2,6,10,14,18,10,3,7,11,15,19,3,7,10,14};
    int length=sizeof(arr)/sizeof(arr[0]);
    int freq[length];
    int i=0,j;
    freq[i]=-1;
	for(i=0; i<length; i++)
	{
		int count = 1;
		for(j=i+1; j<length; j++)
		{
    		if(arr[i]==arr[j])
    		{
    			count++;
    			freq[j] = 0;
    		}
    	}
    	if(freq[i]!=0)
    	{
    		freq[i] = count;
		}
	}
 	for(i=0; i<length; i++)
  	{
  		if(freq[i]!=0)
  		{
  			printf("%d : %d\n", arr[i], freq[i]);
		}
  	}
 	return 0;
}