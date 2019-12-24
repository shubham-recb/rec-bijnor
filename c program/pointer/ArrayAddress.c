//WAP in c to access elements of array using pointer
#include<stdio.h>
int main()
{
	int i,a[3]={30,40,50};
	int *address_a[3];
	for(i=0;i<3;i++)
	{
		address_a[i]=&a[i];
	}
	for(i=0;i<3;i++)
	{
		printf("Elements of arrar[%d] = %d\n",i,*address_a[i]);
	}
	return 0;
}
