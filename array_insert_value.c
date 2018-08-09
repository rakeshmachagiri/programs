#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5},i,j,position,value,size;
	printf("enter the position ");
	scanf("%d",&position);
	printf("enter the value ");
	scanf("%d",&value);
//	printf("%d",sizeof a[10]);
	 size=sizeof a[10];
	 
	 for(i=size+1;i>=position;i--)  
	    {
	    	a[i]=a[i-1];
	    	
		}
		 a[position]=value;
	    
	     
	 for(i=0;i<=(size+1);i++) 
	    {
	    	printf("%d ",a[i]);
		}	
	
}
