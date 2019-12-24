#include<stdio.h>
main()
{
	int s,n,i,items,j=1;
	printf("Enter size of Array : ")	;
	scanf("%d",&s);
	int a[s];
	printf("Enter no of elements in Array : ");
	scanf("%d",&n);
	printf("Enter elements in Array : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter items which you want to search : ");
	scanf("%d",&items);
	while(j<=n)
	{
		if(items==a[j])
		{
			printf("Search Successful");
			break;
		}
		j=j+1;
	}
	if(j==n+1)
	{
		printf("Linear Search Unsuccessful");
	}
}
