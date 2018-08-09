#include<stdio.h>
main()
{
	int a[6]={1,4,6,8,10},i;
	int b[5];
	for(i=0;i<5;i++)
	{
		b[i]=a[i];  // the values of a[i] is equal to b[i], 
	}

for(i=0;i<5;i++)
{
	printf("%d",b[i]);
}
	
}
