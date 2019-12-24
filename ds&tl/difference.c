/*Write a program in C to create two sets and perform the Difference operation on sets. */
#include<stdio.h>
main()
{
	printf("Shubham(19/IT/905)\n");
	int a[10],b[10],c[10],i,j,k=0,m,n,flag=0;
	printf("Enter no. of  elements in First Array :\n");
	scanf("%d",&m);
	printf("Enter elements in First Array :\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. of  elements in Second Array :\n");
	scanf("%d",&n);
	printf("Enter elements in Second Array :\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==n)		
		{
			c[k]=a[i];	
			k++;
		}			
	}
	
	printf("Difference of two sets :\n");
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
}
