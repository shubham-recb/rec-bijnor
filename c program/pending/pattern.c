/* 2 2 2
   2 1 2
   2 2 2*/ 
#include<stdio.h>
main()
{
	int i,j,N;
	printf("Enter a no : ");
	scanf("%d",&N);
	for(i=N; i>=1; i--)
    {
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
        }
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(i=1; i<N; i++)
    {
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i+1);
        }
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

}
