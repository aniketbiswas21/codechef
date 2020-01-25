#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int j=a>b?a>c?a:c:c>b?c:b;
	printf("%d",j);
}