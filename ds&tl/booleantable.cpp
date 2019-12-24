/*Write a program in C to Display the Boolean Truth Table for AND, OR , NOT .*/
/*#include<stdio.h>
main()
{
 int a[2][2],b[2][2],c[2];
 int i,j;
 for(i=0;i<=1;i++)
 {
 for(j=0;j<=1;j++)
  {
   a[i][j]=(i&&j);
   b[i][j]=(i||j);
  }
 }

 for(i=0;i<=1;i++)
 {
 c[i]=(!i);
 }

 printf("\nThe Truth Table for AND Gate( && ) is..\n");
 printf("   A    B     :    C=A&&B\n");
for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,a[i][j]);
   }
 }
 printf("\nThe Truth Table for OR Gate( || ) is..\n");
 printf("   A    B     :    C=A||B\n");
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,b[i][j]);
   }
 }
 printf("\nThe Truth Table for NOT Gate (!) is..\n");
 printf("   A   :  B = !A\n");
 for(i=0;i<=1;i++)
 {
   printf("   %d   :  %d\n",i,c[i]);
 }
}
*/
#include<stdio.h>
main()
     {
    printf("Shubham(19/IT/905)\n");
      int a,b,temp,i;
      printf("\tA   B   A.B  A+B  A'\n");
      for(i=0;i<4;i++)
        {
          temp=i;
          a=i%2;
          temp/=2;
          b=temp%2;
          printf("\n\t%d    %d    %d   %d   %d\n",b,a,a&&b,a||b,!b);
         }
 
  }
