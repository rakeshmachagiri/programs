#include<stdio.h>
main()
{int a,b;
scanf("%d%d",&a,&b);
switch(a>b)
{
	case 1:
		printf("%d is grater",a);
		break;
	case 0:
		printf("%d is grater",b);
}
}
