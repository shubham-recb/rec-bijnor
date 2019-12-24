/*Write a program in C to perform the Power Set operation on a set.*/
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
	printf("Shubham(19/IT/905)\n");
    char set[] = {'a','b','c'}; 
    printPowerSet(set,3); 
    return 0; 
} 
void printPowerSet(char *set,int set_size) 
{ 
	unsigned int pow_set_size = pow(2, set_size); 
    int counter,j; 
    printf("{}");
    for(counter=0;counter<pow_set_size;counter++) 
    { 
      for(j=0;j<set_size;j++) 
       { 
          if(counter&(1<<j)) 
            printf("%c",set[j]); 
       } 
       printf("\n"); 
    } 
} 
