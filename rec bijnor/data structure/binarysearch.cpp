#include<stdio.h>
main()
{
	int s,n,items,i;
	printf("Enter size of Array : ");
	scanf("%d",&s);
	int a[s];
	printf("Enter no. of elements in Array : ");
	scanf("%d",&n);
	printf("Enetr element in Array : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter items which you want to search in Array : ");
	scanf("%d",&items);
	int si,mi,ei;
	si=1,ei=n;
	mi=(si+ei)/2;
	while(si<=ei && items!=a[mi])
	{
		if(items<a[mi])
		{ 
			ei=mi-1;
		}
		else
		{
			si=mi+1;
		}
		mi=(si+ei)/2;
	}
	if(items==a[mi])
	{
		printf("Binary Search Successful");
	}
	else
	{
		printf("Binary Search Unsuccessful");
	}
}
