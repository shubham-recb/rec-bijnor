//WAP in c to print revverse of an Array : 
#include<stdio.h>
main()
{
	int a[4],i;
	printf("Enter elements in array : ");
	for(i=1;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
}
