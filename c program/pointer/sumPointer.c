//WAP in c to print the sum of two pointer variables
#include<stdio.h>
main()
{
	int a,b,res,*pa=&a,*pb=&b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	res=sum(pa,pb);	
	printf("Sum of two pointer is : %d",res);
} 
int sum(int *a,int *b)
{
	int add;
	add = *a + *b;
	return add;
}
