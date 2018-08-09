#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("jan 31days");
			break;
		case 2:
			printf("feb 28days");
			break;
		case 3:
			printf("march 30days");
			break;
		case 4:
			printf("aprl 30days");
			break;
		case 5:
			printf("may 30days");
			break;
		case 6:
			printf("jun 30days");
			break;
		case 7:
			printf("july 30days");
			break;
		case 8:
			printf("aug 30days");
			break;
		case 9:
			printf("sep 30days");
			break;
		case 10:
			printf("oct 30days");
			break;	
		case 11:
			printf("nov 30days");
			break;	
		case 12:
			printf("dec 31days");
			break;	
			default:
			printf("no month");							
	}
	
}
