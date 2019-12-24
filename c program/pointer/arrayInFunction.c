//WAP in c to pass array in function as a arguments
#include<stdio.h>
main()
{
	int a[3]={10,20,30};
	int res=pass_Array(a,3);
	printf("Sum of array elements is = %d",res);
}
int pass_Array(int *array,int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return sum;
}
