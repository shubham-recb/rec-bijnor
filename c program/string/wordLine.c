#include<stdio.h>
main()
{
	int s[50],i=0;
	printf("Enter a Senetance : ");
	scanf("%[^\n]s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		printf("%s",s[i]);
		if(s[i]=='')
		{
			printf("\n");
		}
	}
}
