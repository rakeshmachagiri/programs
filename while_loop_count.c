#include<stdio.h>
main()
{
	int number,index=0;
	scanf("%d",&number);
	
	while(number>0)
	
	{
	   number=number/10;
	   index++;
	   
	}
	printf("%d",index);
	
}
