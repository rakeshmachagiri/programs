#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5},i,value,position;
	printf("enter the value ");
	scanf("%d",& value);
	printf("enter the position ");
	scanf("%d",& position);
	a[position]=value;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
}
