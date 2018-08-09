#include<stdio.h>
main()
{
	int number,index,sum=0;
	scanf("%d",&number);
	
	while(number>0)
	
	{
	   
	   sum=sum+(number%10);
       number=number/10;
	   
	}
	printf("%d",sum);

}
