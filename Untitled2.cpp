#include<stdio.h>
int num,pos1,pos2;

void swap(int *num,int pos1,int pos2);
main()
{   
    scanf("%d",&num);
	scanf("%d %d",&pos1,&pos2);
	printf("%d\n",num);
    swap(&num,pos1,pos2);
    
}
void swap(int *num,int pos1,int pos2)
{
	int i,a;
	for(i=7;i>=0;i--)
	{
		printf("%d ",(* num&(1<<i))==(1<<i));
	}


	*num=((((*num&(1<<pos1))==(1<<pos1))<<pos2)|(((*num&(1<<pos2))==(1<<pos2))<<pos1))|(*num&~(1<<pos1)|(1<<pos2));
	 printf("\n");
	for(i=7;i>=0;i--)
	{
		printf("%d ",(*num&(1<<i))==(1<<i));
	}
	printf("\n%d ",*num);
}
