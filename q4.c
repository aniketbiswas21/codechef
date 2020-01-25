#include<stdio.h>
int main(){
	char name[10];
	printf("Enter your name:");
	scanf("%s",name);
	int h;
	printf("Enter House No(only numbers):");
	scanf("%d",&h);
	char street[20];
	printf("Enter Street Name:");
	scanf("%s",street);
	char city[10];
	printf("Enter City:");
	scanf("%s",city);
	char state[10];
	printf("Enter State:");
	scanf("%s",state);
	int pin;
	printf("Enter Pin:");
	scanf("%d",&pin);
	printf("Your Details:\n");
	printf("Name:%s \n",name );
	printf("House no:%d \n",h);
	printf("Street no:%s \n",street);
	printf("City:%s\n",city);
	printf("State:%s\n",state);
	printf("Pin code:%d \n",pin);

		return 0;

}