#include<stdio.h>
main()
{
	int a[10],i,count=0;
	for(i=0;i<10;i++)
	{
		
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<10;i++)
	{	
	if((a[i]%2)==0)
	{   
 	  count++;

	}
	else
	{
		printf("%d",i);
	}
	printf("%d\n",count);
}
}
