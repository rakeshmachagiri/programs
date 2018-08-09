#include<stdio.h>
main()
{
	int array[6]={1,2,3,4,5};
	int number=6,index,i;
	
	for(index=5;index>=3;index--);
	{
	    array[index]=array[index-1];
	}
	printf("%d\n",array[2]);
	array[2]=6;
	for(index=0;index<=5;index++)
	{
	    printf("%d ",array[index]);
	}
}
