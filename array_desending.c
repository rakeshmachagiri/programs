#include<stdio.h>
main()
{
	int a[5],b[5],i,j,k;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)	
	{    
	       for(j=i+1;j<5;j++)
	       {
		  
	            if(a[i]>a[j])
	                 {
	                	k=a[j];
	                	a[j]=a[i];
	                	a[i]=k;
	                 }
            }      
    }
	
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	    
}
