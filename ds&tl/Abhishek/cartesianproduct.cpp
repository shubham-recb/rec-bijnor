/*Write a C Program to find Cartesian Product of two sets.*/
#include<stdio.h>
main()
{
	printf("Abhishek Gupta(19/IT/901)\n");
	int a[10],b[10],i,j,m,n;
	printf("Enter no. of  elements in First Array : ");
	scanf("%d",&m);
	printf("Enter elements in First Array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. of  elements in Second Array : ");
	scanf("%d",&n);
	printf("Enter elements in Second Array : ");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("(%d,%d),",a[i],b[j]);
		}
	}
}
