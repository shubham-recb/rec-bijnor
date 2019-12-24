#include<stdio.h>
main()
{
	int a[10],i,si=1,n,ei,item,mid;
	printf("Enter Total no. of element:\n");
	scanf("%d",&n);
	printf("Enter %d sorted element in arrary:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter Item Which you want to search: ");
	scanf("%d",&item);
	ei=n;
	mid=(si+ei)/2;
	while((si<=ei)&&(item!=a[mid]))
	{
		if(item<a[mid])
		{
			ei=mid-1;
		}
		else
		{
			si=mid+1;
		}
		mid=(ei+si)/2;
	}
	if(item==a[mid])
	{
		printf("Search Successful");
	}
	else
	{
		printf("Search Unsussessful");
	}
}
