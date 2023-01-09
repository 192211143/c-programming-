#include<stdio.h>
main()
{
int i,j,n,m,arr[20],co=0,ch;
printf("Enter a number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter an element :");
	scanf("%d",&arr[i]);
}
	for(i=0;i<n;i++){
		ch=0;
		for(j=1;j<=arr[i];j++){
			if(arr[i]%j==0){
				ch+=1;
			}
			}
			if(ch>2){
				co+=1;
		}
	}
	printf("Number of Composite numbers : %d",co);
}
