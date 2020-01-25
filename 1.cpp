#include<stdio.h> 
int main() 
{ 
int basic; 
float a,b,c; 
printf("enter your basic pay:\n"); 
scanf("%d",&basic); 
a=0.5*basic; 
b=0.2*basic; 
c=0.1*basic; 
printf("your Dearness allowance is: %f \n",a); 
printf("your House rent allowance is: %f \n",b); 
printf("your Vehicle allowance is: %f \n",c); 
printf("your Gross salary is: %f",a+b+c+basic); 
return 0; 
}
