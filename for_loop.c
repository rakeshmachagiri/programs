#include<stdio.h>
main()
{
	int number,index,count=0;
	scanf("%d",&number);
	for(index=1;0>number;number=number/10)
	{   
	   
		index=number%10;
		count=count+index;
		
printf("%d",index);	
	}
		

	
		
	
}
