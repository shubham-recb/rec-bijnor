//WAP in c to pass pointer as argument in a function
#include<stdio.h>
main()
{
	int a;
	pointer_Fun(&a);
	printf("Address of  a is = %d",a);
}
void pointer_Fun(int *my_pointer)
{
	*my_pointer=1000;
	return;
}
