#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter First Number");
	scanf("%d",&a);
	printf("Enter Second Number");
	scanf("%d",&b);
	printf("Enter Third Number");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is greater:%d",a);
	}
	else if(b>a&&b>c)
	{
		printf("b is greater:%d",b);
	}
	else
	{
		printf("c is greater:%d",c);
	}
}
