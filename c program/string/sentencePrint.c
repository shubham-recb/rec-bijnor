#include<stdio.h>
main()
{
	char ch,s[10],sen[50];
	printf("Enter Character, Word, a Senetence : ");
	scanf("%c\n",&ch);
	scanf("%s\n",&s);
	scanf("\n");
	scanf("%[^\n]s",&sen);
	printf("%c\n",ch);
	printf("%s\n",s);
	printf("%s",sen);
}
