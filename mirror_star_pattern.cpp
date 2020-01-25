#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p=n/2;
	for(int i=1;i<=p+1;i++){
		for(int j=i;j<=2*p;j++){
			cout<<"  ";
		}
		for(int g=1;g<=2*i-1;g++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	for(int i=1,j=p;i<=p;i++,j--){
		for(int k=1;k<=2*i+(n-1);k++){
			cout<<" ";
		}
		for(int u=1;u<=2*j-1;u++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}