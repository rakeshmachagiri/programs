#include<stdio.h>
void list (int *p)
{   
    int i;
	for(i=0;i<10;i++)
	{
	printf("%d ",*p);
    p++;
    }
}
main()
{
	int array[10]={1,2,3,3,3,6,7,8,9,7};
	list(array);
}
