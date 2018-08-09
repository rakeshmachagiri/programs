#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5},i,j=0;
	int b[5]={6,7,8,9,10};
	
	for(i=5;i<10;i++)
	{  
	
	  
		a[i]=b[j];
      j++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
