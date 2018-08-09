#include<stdio.h>
main()
{
	int number,index=7;
	scanf("%d",&number);
	do
	{
		if((number&(1<<index))==(1<<index))
	{
			printf("%d",1);
		}
		else{
		
		printf("%d",0);
		}
		index--;
	}while(0<=index);
}
