#include<stdio.h>
main()
{
	int a[100];
	int i=0,size=0;
	int *ptr;
	printf("enter the size of array:");
	scanf("%d",&size);       //enter the size of the array
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);  // values are store in the adress of ptr       
	}
	ptr=&a;            // we have to mention that ptr=a, otherwise it will take updated value from ptr++ that is 5
	for(i=0;i<size;i++)
	{
		printf("%d ",*ptr); // it will print the values from a[0] up to size
	    ptr++;
	} 
	
}
