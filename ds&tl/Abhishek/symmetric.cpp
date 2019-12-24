/*Write a program in C to create two sets and perform the Symmetric Difference operation*/
#include<stdio.h>
main()
{
	printf("Abhishek Gupta(19/IT/901)\n");
	int a[10],b[10],u[20],c[10],s[20],i,j,k=0,l=0,o=0,m,n,flag;
	printf("Enter no. of  elements in first Array :\n");
	scanf("%d",&m);
	printf("Enter element in first Array :\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter no. of  elements in Second Array :\n");
	scanf("%d",&n);
	printf("Enter element in second Array :\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<m;i++)
	{
		u[k]=a[i];
		k++;
	}	
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			u[k]=b[i];
			k++;
		}
	}
	printf("Union of two sets is : ");
	for(i=0;i<k;i++)
	{
		printf("%d",u[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(b[j]==a[i])
			{
				c[l]=b[j];
				l++;
			}
		}
	}
	printf("\nIntersection of two sets : ");
	for(i=0;i<l;i++)
	{
		printf("%d",c[i]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			if(u[i]==c[j])
			{
				break;
			}
		}
		if(j==l)		
		{
			s[o]=u[i];	
			o++;
		}			
	}
	
	printf("\nSymmetric Difference of two sets :");
	for(i=0;i<o;i++)
	{
		printf("%d",s[i]);
	}
}
