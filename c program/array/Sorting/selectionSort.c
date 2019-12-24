//WAP in c to perform selection sort of the given array in descending order
#include<stdio.h>
main()
{
	int a[5],i,j,min=0,temp=0;
	printf("Enter elements in Array : ");
	for(i=0;i<5;i++)   
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		min=i;
		for(j=1;i<=5;i++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}

