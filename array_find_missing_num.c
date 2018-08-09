
#include<stdio.h>
main()
{
	int array[100],i,sum=0,length;
	scanf("%d",&length);
	
	for(i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	
	
	for(i=0;i<length-1;i++)
	{  
	  if(1+array[i]!=array[1+i]) 
	  {
	  	printf("%d", (1+array[i]));
}
	}
		
     

}

	

