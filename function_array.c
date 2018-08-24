#include<stdio.h>
void list (int a[10])
{   
    int i;
	for(i=0;i<10;i++)
	{
	printf("%d",a[i]);
    }
}
main()
{
	int array[10]={1,2,3,4,5,6,7,8,9};
	list(array);
}
