#include<stdio.h>
int main(){
	printf("integer calculator");
	int a,b,c;
	char d[20];
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&d);

	if(d=="+"){
		c=a+b;
		printf("Ans:%d \n",c);
			}


	return 0;
}