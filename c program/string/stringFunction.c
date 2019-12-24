//WAP in c to implement all string function
#include<stdio.h>
#include<string.h>
int main()
{
	char c1[20],c2[20];
	printf("Enter two String : ");
	scanf("%s %s",&c1,&c2);
	int n1=strlen(c1);			//find length of string 
	int n2=strlen(c2);
	printf("Length of First String : %d\n",n1);
	printf("Length of Second String : %d\n",n2);
	
	if(strcmp(c1,c2)==0)         //comparesion of string
	{
		printf("String are equal");
	}
	else
	{
		printf("String are not equal\n");	
	}
	
	
	strcat(c1,c2);				//Concatenate two string.
	printf("Complete string is : %s",c1);
	
	
	strcpy(c2,c1);				//Copy a string to another string.
	printf("Copied string is : %s\n",c2);
	return 0;
}
