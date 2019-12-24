#include<stdio.h>
main()
{
	int a[5],b[5],i,j;
	printf("Enter element in array A:");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter element in array B:");
	for(j=1;j<=5;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=1;j<=5;j++)
	{
		printf("%d\t",a[j]);
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i]==b[j])
			{
				
			}
		}	
	}
}
