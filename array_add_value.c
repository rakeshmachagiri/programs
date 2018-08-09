// ADDING SOME VALUE TO THE GIVEN ARRAY
#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6},i,number;
	printf("enter a value");
	scanf("%d",&number);
	a[6]=number;
	for(i=0;i<7;i++)
	   {
	   	printf("%d",a[i]);
	   }
}
