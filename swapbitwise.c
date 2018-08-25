#include<stdio.h>
void swapbits(int *ptr,int val1,int val2);
main()
{
	int number,pos1,pos2;
	scanf("%d",&number);
	scanf("%d",&pos1);
	scanf("%d",&pos2);
	printf("before swaping number:%d\n",number);
	swapbits(&number,pos1,pos2);
	printf("after swaping number:%d\n",number);
}
void swapbits(int *ptr,int val1,int val2)
{
    int i=0,j=0;
    printf("before:");
    for(i=7;i>=0;i--)
    {
    printf("%d",(*ptr&(1<<i))==(1<<i));
    }
    
	printf("\n");
   	*ptr=(((*ptr&(1<<val1))==(1<<val1))<<val2)|(((*ptr&(1<<val2))==(1<<val2))<<val1)|(*ptr&~((1<<val1)|(1<<val2)));
   	
   	printf("after:");
   	for(i=7;i>=0;i--)
    {
    printf("%d",(*ptr&(1<<i))==(1<<i));
	}
	printf("\n");

}
 
