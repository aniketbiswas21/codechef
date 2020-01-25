#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"1"<<endl;
	}
	else if(n==2){
		cout<<"1"<<endl;
		cout<<"1"<<"1"<<endl;
	}
	else{
	for(int i=1;i<=2;i++){
		for(int j=1;j<=i;j++){
			cout<<"1";
		}
		cout<<endl;
	}
	for(int k=0;k<=n-3;k++){
		cout<<k+2;
		for(int y=0;y<=k;y++){
			cout<<"0";
		}
		cout<<k+2;
		cout<<endl;
		}
		
		
	}
}
