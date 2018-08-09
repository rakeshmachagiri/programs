#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},i,j;
	
	for(i=2;i<5;i++) // the value of a[2] is going to delit
	{    
	     j=(i+1); 
	
		a[i]=a[j]; // the value of a[i] is replaced by a[i+1], then a[5] is replacd by a[6], 
		            //   hear a[2]=3 is replaced with a[3]=4,
	}                //    then 3is over writed by 4, , 
	                   // as same process will be done up to i<5,
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
//deliting value of a[5]
