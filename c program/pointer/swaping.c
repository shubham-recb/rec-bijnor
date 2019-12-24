//WAP in c swap to no without using third variable using pointer
#include<stdio.h>
main()
{
	int a,b,*p1=&a,*p2=&b;
	printf("Enter two no : ");
	scanf("%d %d",&a,&b);
	
	
	 printf("before swapping : \n*p1=%d\n *p2=%d\n",*p1,*p2);
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	printf("After swapping : \n*p1=%d\n *p2=%d",*p1,*p2);
}
