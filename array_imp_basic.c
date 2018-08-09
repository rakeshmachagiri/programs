#include<stdio.h>
main()
{
	int a[100],i,sum=0, aray_size;
	scanf("%d",&aray_size);
	for(i=0;i<aray_size;i++)
	{
	scanf("%d",&a[i]);
    }
	for(i=0;i<=aray_size;i++)
	{
		 sum=sum+a[i];

	}
	printf("%d",sum);
	
}
