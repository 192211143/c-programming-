#include <stdio.h>  
#include <conio.h>  
int main ()  
{   
    int arr[20], i, j, k, size, l,x;  
    printf ("enter the number of elements: ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter %d elements of the array: \n ", size);  
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {   
            if ( arr[i] == arr[j])  
            { 
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                size--;  
                j--;      
            }  
        }  
    }  
    for (j=0;j<=size-1;j++)
	{
	for (k=j+1;k<=size-1;k++)
	{
		if (arr[j]>arr[k])
		{
			x=arr[k];
			arr[k]=arr[j];
			arr[j]=x;
		}
	}
	}
	printf("Array after removing duplicates:\n");
	for (l=0;l<=size-1;l++)
	{
		printf("%d ",arr[l]);
	}
}  


