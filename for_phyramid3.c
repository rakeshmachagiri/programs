#include<stdio.h>
main()
{
	int i,j,l;
	for(i=1;i<=5;i++)
	{   
	    for(l=5;l>i;l--)
	    {
	    	printf(" ");
		}
	    
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		printf("\n");
	}
}
 
//    1
//   12
//  123
// 1234
//12345
