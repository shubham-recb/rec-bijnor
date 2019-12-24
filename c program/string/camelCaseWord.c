//WAP in c to find no. of word in a given camelCase word.(Not Completed)
#include<stdio.h>
#include<string.h>
main()
{
	char cc,*s=&cc;
	printf("Enter a camel case word : ");
	scanf("%c",&cc);
	camelcase(s);
}
void camelcase(char *s)
{
	int n,count=1,i;
    n=strlen(s);
    for(i=1;i<n-1;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
	}
	printf("No of word is : %d",count);
}

