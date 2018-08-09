#include<stdio.h>
void  type_of_number (void);
main()
{

	type_of_number();
	
}
void  type_of_number()

{    int a;

    scanf("%d",&a);
    
	if((a%2)==0)
	{
	
	 printf("even");
}
	else
	{
	
	printf("odd");
}

	
}

