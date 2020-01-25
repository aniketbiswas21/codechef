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
	for(int i=1;i<=3;i++){
		for(int j=1;j<=i;j++){
			cout<<"1";
		}
		cout<<endl;
	}
	for(int k=1;k<=n-3;k++){
		cout<<"1";
		for(int y=0;y<=k;y++){
			if(k%2==0){
			cout<<"1";
		}
		else{
			cout<<"0";
		}

		}
		cout<<"1";
		cout<<endl;
	}
}
}