/*Write a program in C to create two sets and perform the Union operation on sets.*/ 
#include<stdio.h>
main()
{
	printf("Abhishek Gupta(19/IT/901)\n");
	int a[10],b[10],u[20],i,j,k=0,m,n,flag;
	printf("Enter no. of elements in first Array : ");
	scanf("%d",&m);
	printf("Enter element in first Array : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter no. of elements in Second Array : ");
	scanf("%d",&n);
	printf("Enter element in second Array : ");
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
}
