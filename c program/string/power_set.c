/*Write a program in C to perform the Power Set operation on a set.*/
#include<stdio.h>
#include<math.h>
main()
{
	void power_set(int,int);
	printf("Shubham(19/IT/905)\n");
	int i,m;
	printf("Enter size of  Array : ");
	scanf("%d",&m);
	int set[m];
	printf("Enter %d elements in Array : ",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&set[i]);
	}
	power_set(*set,m);
}
void power_set(int *set,int set_size)
{
	unsigned int power_set_size=pow(2,set_size);
	int counter,j;
	for(counter=0;counter<power_set_size;counter++)
	{
		for(j=0;j<set_size;j++)
		{
			if(counter & (1<<j))
			{
				printf("%c",set[j]);
			}
		}
		printf("\n");
	}
}
