//find union using function :-
#include<stdio.h>
//take something return something
main() 
{
	int res(int,int,int,int);
	int a[5],b[5],c[10],i,j,k,x,y;
	printf("Enter no of elements in first array : ");
	scanf("%d",&x);
	printf("Enter elelements in first array : ");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no of element in second array : ");
	scanf("%d",&y);
	printf("Enter elements in second array : ");
	for(j=0;j<y;j++)
	{
		scanf("%d",&b[j]);
	}
	c[10]=res(x,y,a,b);
	printf("Union of two set : ");
	for(k=0;k<10;k++)
	{
		printf("%d",c[k]);
	}
}
int res(int x,int y,int a[],int b[])
{
	int d[10],n=0,flag;
	for(l=0;l<x;l++)
	{
		d[n]=a[l];
		n++;
	}
	for(int l=0;l<x;l++)
	{
		flag=1;
		for(int m=0;m<y;m++)
		{
			if(b[l]==d[m])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			d[n]=b[l];
			n++;
		}
	}
	return d[n];
}
