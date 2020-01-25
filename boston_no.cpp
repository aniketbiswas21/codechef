#include<iostream>
using namespace std;
bool CheckPrime(int n){
	int flag=1;
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			flag=0;
		}
	}
	if(flag==1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n,k;
	cin>>n;
	if(n==4||n==1){
		cout<<1;
		return 0;
	}
	int ans=0;
	int ans1=0;
	int j=n;
	while(j!=0){
		k=j%10;
		ans=ans+k;
		j=j/10;
}
for(int y=2;y<=n;y++){
	if(n%y==0){
	if(CheckPrime(y)){
		ans1=ans1+y;
	n=n/y;
	y=2;}
	if(n==1){
		break;
		}
	}
	}
		if(ans==ans1){
		cout<<1;
	}
	else{
		cout<<0;
	}
}