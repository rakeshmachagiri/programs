#include<stdio.h>
main()
{
	int a[10],i,j,count_even=0,count_odd=0;
	for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
  for(i=0;i<10;i++)
	  {
	  	if((a[i]%2)==0)
	  	  {
	  	  	 count_even++;
	  	
	      }
	    else
		   {
		   	  count_odd++;
	       }  
	       
	  }
	  printf("even=%d\n",count_even);
	  printf("odd=%d\n",count_odd);
	 
}
