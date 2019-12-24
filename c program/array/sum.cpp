//WAP in c to find the sum of all element in Array. 
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,sum=0;
	float avg=0;
	printf("Enter 5 no. in array : ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		avg=sum/5.0;
	}
	printf("Sum of Arrary : %d\n",sum);
	printf("Avg of Arrary : %f",avg);
}
