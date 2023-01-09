#include<stdio.h>
main()
{
int i,j=0,n,arr[20],narr[20];
printf("Enter the number elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter an element :");
	scanf("%d",&arr[i]);
}
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}

