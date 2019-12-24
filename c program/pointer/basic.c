//Implementation of concepts
#include<stdio.h>
main()
{
	int a,*p1=&a;
	printf("Enter a no : ");
	scanf("%d",&a);
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",p1);
	printf("%d\n",*p1);
	printf("%u\n",&p1);
	printf("%u\n",*(&p1));
	printf("%d\n",&(*p1));
}
