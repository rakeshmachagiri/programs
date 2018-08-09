#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},number,i,k=0,position=0;
	printf("enter the number: ");
	scanf("%d",&number);
    for(i=0;i<5;i++)
    { 
       if(a[i]==number)
        {
        	k=1;
        	position=i;
		}
	}
	if(k==1)
	{
		printf("%d is  present in the array in %d position",number,position);
	}
	else if(k==0)
	{
		printf("%d is NOT present in the array ",number);
	}
	
}
