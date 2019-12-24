//WAP in c to convert in fration of interger to float value(Most Important)
#include<stdio.h>
main()
{
	float fraction(int,int);
	int a,b;
	float div;
	printf("Enter Two no : ");
	scanf("%d\n%d",&a,&b);
	div=fraction(a,b);
	printf("%f",div);
}
float fraction(int a,int b)
{
	float res=(float)a/(float)b;
	return res;
}
