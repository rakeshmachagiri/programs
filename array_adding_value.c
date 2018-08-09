#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9},i;
	
	for(i=10;i>=5;i--)  //   5 is position where we want to insert a value,
	{   
		a[i]=a[i-1]; // a[i] value is placed at a[i-1], that is a[9] value is placed at a[10] place 
		              //   the proces will continue up to i=5; after it will come out of the loop,
    }
		a[a[i]-1]= 0;  // and place the value of  a[4]=0 at a[4]

		
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]); 
	}
	
}
