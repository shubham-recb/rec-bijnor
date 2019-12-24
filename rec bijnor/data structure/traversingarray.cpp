#include<stdio.h>
main()
{
	int s,n,i;
	printf("Enter size of Array : ");
	scanf("%d",&s);
	int a[s];
	printf("Enter no. of element in Araay : ");
	scanf("%d",&n);
	printf("Enter %d elements in Array : ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
