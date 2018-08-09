#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5};
	int b[10]={6,7,8,9,10},i;
	for(i=5;i<10;i++)
	   {
	   	a[i]=b[i-5];
	   }
	for(i=0;i<10;i++)
	   {
	   	printf("%d",a[i]);
	   }
} 
