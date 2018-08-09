#include<stdio.h>
main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{	
	if((a[i]%2)==0)
	{
		printf("even= %d",a[i]);
	}
	else
	{
		printf("odd=%d",a[i]);
	}
	printf("\n");
}
}
