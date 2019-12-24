/*Write a program in C to create two sets and perform the Intersection operation on sets.*/ 
#include<stdio.h>
main()
{
	printf("Shubham(19/IT/905)\n");
	int a[10],b[10],c[10],i,j,k=0,m,n;
	printf("Enter no. of elements in First Array : ");
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
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(b[j]==a[i])
			{
				c[k]=b[j];
				k++;
			}
		}
	}
	printf("Intersection of two sets : ");
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
}
