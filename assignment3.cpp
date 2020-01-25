#include<stdio.h>
#include<math.h>
int main()
{
 float A;
 int a,b,c;
 printf("Enter a floating number with three integeral part. \n");
 scanf("%f", &A);
 a=A;
 b=a%10;
 c=a%100;
 printf("%d \n %d \n",c,b);
 return 0;
}