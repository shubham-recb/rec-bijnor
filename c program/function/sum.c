//Addition of two number using function
#include<stdio.h>
/*Take nothing return nothing
main()
{
	void sum(void);
	sum();
}
void sum()
{
	int a,b,sum;
	printf("Enter two no. : ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Sum of %d+%d=%d",a,b,sum);
}*/


/*Take something return nothing
main()
{
	void sum(int,int);
	int a,b;
	printf("Enter two number : ");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	int add=a+b;
	printf("Sum of %d+%d=%d",a,b,add);
}*/


/*Take nothing return something
main()
{
	int add(void);
	printf("Sum =%d",add());
}
int add()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	return (a+b);
}
*/


//take something return something
main()
{
	int sum(int,int);
	int a,b;
	printf("Enter two no. : ");
	scanf("%d%d",&a,&b);
	printf("Sum of %d+%d=%d",a,b,sum(a,b));
}
int sum(int a,int b)
{
	return (a+b);
}
