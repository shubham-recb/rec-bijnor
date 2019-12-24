#include<stdio.h>
main()
{
	int s,n,i,j,item,index;
	printf("Enter size of Array : ");
	scanf("%d",&s);
	int a[s];
	printf("Enter No. of Element : ");
	scanf("%d",&n);
	printf("Enter element in Array : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++)
	{
		printf("%d",a[j]);
	}
 	printf("\nEnter items which you you want to store : ");
 	scanf("%d",&item);
 	printf("Items is : %d",item);
 	printf("\nEnter index no. where you want to store items : ");
 	scanf("%d",&index);
 	printf("Index no. is : %d\n",index);
 	if(n==s)
 	{
 		printf("\nArray Overflow");
	}
	else if((index>=n) || (index<1))
	{
		printf("\nInsertion is not possible");
	}
	int comp=n;
	while(comp>=index)
	{
		a[comp+1]=a[comp];
		comp=comp-1;
	}
	a[index]=item;
	n=n+1;
	for(int f=1;f<=n;f++)
	{
		printf("%d",a[f]);
	}
}
