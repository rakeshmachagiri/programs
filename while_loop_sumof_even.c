#include<stdio.h>
main()
{
	int number,index=1;
	scanf("%d",&number);
	while(index<=number)
	{   
	
	    if((index%2)==0)
	    {
		printf("%d\n",index);
	    }
		index++;
	}
	
}
