//WAP in c to find greatest value in a array;
#include<stdio.h>
main()
{
	int a[10],i,size;
	printf("Enter size of Array : ");
	scanf("%d",&size);
	printf("Enter elements in Array : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Greatest value is in Array : %d",greatest(a,size));
}
int greatest(int *a,int size)
{
	int j,great;
	great=a[0];
	for(j=1;j<size;j++)
	{
		if(great<a[j])
		{
			great=a[j];
		}
	}
	return great;
}
