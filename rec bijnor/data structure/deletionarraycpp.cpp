#include<stdio.h>
main()
{
	int s,n,index,i;
	printf("Enter size of array : ");
	scanf("%d",&s);
	int a[s];
	printf("Enter no.of Elements in Array : ");
	scanf("%d",&n);
	printf("Enter %d element in Array : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nChoose index no. where you want to delete items : ");
	scanf("%d",&index);
	if(n==0)
	{
		printf("Underflow");
	}
	else if(index>n || index<1)
	{
		printf("Deletion is not possible");
	}
	int j=index;
	while(j<n)
	{
		a[j]=a[j+1];
		j=j+1;
	}
	n=n-1;
	int k;
	for(k=0;k<n;k++)
	{
		printf("%d",a[k]);
	}
}
