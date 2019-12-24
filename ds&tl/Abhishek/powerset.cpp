/*Write a program in C to perform the Power Set operation on a set.*/
#include<stdio.h>
main()
{
	printf("Shubham(19/IT/905)\n");
	int a[5],i,j,m,p,pow;
	printf("Enter no. of elelments in Array : ");
	scanf("%d",&m);
	printf("Enter %d elements in Array : ",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	p=pow(2,m);
	for(i=0;i<p;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i&(1<<j))
			{
				printf("%d",a[j]);
			}
		}
	}
	
}
