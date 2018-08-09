#include<stdio.h>
main()
{
	int a[5]={1,1,7,5,9},b,i,count=0;
	scanf("%d",&b);
	for(i=0;i<5;i++)
	{
		if(a[i]==b)
		{   
		count++;
		}
	}
	if(count>=1)
	{
	   printf("number is present in the array");
	}
	else
	{
		printf("number is not present in the array");
	}

}
