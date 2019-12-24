#include<stdio.h>
main()
{
	int a[2],i;
	printf("Enter three element in array:");
	for(i=0;i<=1;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=1;i++)
	{
	
		if(a[i]>a[i+1])
		{
			printf("%d is greater",a[i]);
		}
		else
		{
			printf("%d is greater",a[i+1]);
		}
	}
}
