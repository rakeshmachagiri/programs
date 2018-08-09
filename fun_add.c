#include<stdio.h>

float multi(float k,float j);
int add(int,int);

void main()
{
	int a,b,c;
	float f1,f2,f;
	scanf("%d%d%f%f",&a,&b,&f1,&f2);
	c=add(f1,b);
	f=multi(f1,f2);
	printf("%d 	%f",c,f);
}

int add(int x,int y)
{
	printf("%d	",x);
    int z;
    z=x+y;
    return z;
}
float multi(float k,float j)
{
	float f3;
	f3=k*j;
	return f3;
}
