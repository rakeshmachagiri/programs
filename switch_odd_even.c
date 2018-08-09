#include<stdio.h>
main()
{
	int number;
	char a;
	scanf("%d",&number);
	switch(number>0)
	{
	
	case 1:
		printf("positive number");
		break;
	case 0:
		switch(number<0)
		{
			case 1:
				printf("negative");
				break;
			case 0:
				printf("zero");
				break;
		}
		break;
	
	default :
		printf("not assigned");
	
		
	}
}
