#include<stdio.h>
main()
{
	int i,j,l;
	for(i=1;i<5;i++)
	{  
	    for(l=1;l>i;l--)
		{
			printf("%d",l);
		}
		
	   	for(j=1;j>i;j++)
		{
			printf(" ");
		}
		
	

		
		printf("\n");
	}
}
