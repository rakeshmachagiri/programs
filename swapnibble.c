#include<stdio.h>
void swapbyte(int *ptr);
main()
{
	int number;
	scanf("%d",&number);
	swapbyte(&number);
	printf("%d",number);
}
void swapbyte(int *ptr)
{
	int i=0,pos1=7,pos2=3;
	 for(i=7;i>=0;i--)
    {
    printf("%d",(*ptr&(1<<i))==(1<<i));
    }
    printf("\n");
	for(i=0;i<4;i++)
	{   

	*ptr=(((*ptr&(1<<pos1))==(1<<pos1))<<pos2)|(((*ptr&(1<<pos2))==(1<<pos2))<<pos1)|(*ptr&~((1<<pos1)|(1<<pos2)));

		pos1--;
		pos2--;
	
	}
	 for(i=7;i>=0;i--)
    {
    printf("%d",(*ptr&(1<<i))==(1<<i));
    }
    printf("\n");
}
