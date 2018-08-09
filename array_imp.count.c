#include<stdio.h>
main()
{
	int a[9],i,even_count=0,odd_count=0;
	for(i=0;i<9;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
{				
	if((a[i]%2)==0)
	{   

		even_count++;
    }
	else
		odd_count++;
	}
	printf("\n");


printf("even %d\n",even_count);
printf("odd %d",odd_count);
}
