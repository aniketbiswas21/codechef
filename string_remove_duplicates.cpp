#include<stdio.h>
int main()
{
	int a,b,c,x;
	printf("Enter three numbers.\n");
	scanf("%d %d %d", &a,&b,&c);
    x=a>b?(a>c?a:c):(b>c?b:c);
    printf("Largest number is %d", x);
    return 0;
}
