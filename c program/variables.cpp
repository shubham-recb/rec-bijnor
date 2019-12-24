#include<stdio.h>
#include<conio.h>
main()
{
	int a=5;//global variables
	printf("Value of a=%d\n",a);
	printf("Value of a=%d\n",a);
	printf("Value of a=%d\n",a);
	for(int i=0;i<=3;i++)
	{
		int a=6;//local variables
		printf("Value of a=%d\n",a);
		static int b=10; //static variables
		printf("Value of b=%d\n",b);
		b++;
		
	}
		
	
	
}
