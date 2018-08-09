#include<stdio.h>
main()
{
	int a[10]={1,1,1,1,1,1,1,1,1,1},i,j,count=1,k;
//	for(i=0;i<10;i++)
//	{
//	scanf("%d",&a[i]);
//    }
    for(i=0;i<10;i++) // when i=0, it will enter in to the next for loop ,this cycle will repeat up to i<10,
    {     
    	for(j=i+1;j<10;j++)  //  when j=i+1 , it will check the condition and go to if statement
    	{
    		if(a[j]==a[i]) // when the a[i] =a[j]  then it will count 
    		{
    			count++;  //  if it is true it will increase the count
    			for(k=j;k<10;k++)
    			{
    				a[k]=a[k+1];
				}
				j=j-1;
			}
    	
	    }
	    printf("repeat no. is %d, no. of times %d\n",a[i],count); //the count of repeated values are printed
	    count=1;    // count is increasd
    		
	}
	 //printf("%d",count);
	
    
	
}
