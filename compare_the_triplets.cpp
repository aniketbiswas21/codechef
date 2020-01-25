#include <iostream>
using namespace std;
int main(){
	int a[100];
	int b[100];
	int num1=0;
	int num2=0;
	for(int i=0;i<3;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<3;i++){
		cin>>b[i];
		
	}
	for(int j=0;j<3;j++){
		if(a[j]>b[j]){
			num1++;
		}
		else if(a[j]<b[j]){
			num2++;
		}
	}
	cout<<num1<<" "<<num2;
	return 0;
}