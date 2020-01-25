#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	for(int u=1;u<=n;u++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	for(int i=0;i<n/2;i++){
		
		for(int j=n/2-i;j>0;j--){
			cout<<"*"<<" ";
		}
		for(int h=1;h<=2*(2*(i+1)-1);h++){
			cout<<" ";
		}
		for(int j=n/2-i;j>0;j--){
			cout<<"*"<<" ";
			
		}
		cout<<endl;
	}
	for(int i=0,r=n/2;i<n/2-1,r>1;i++,r--){
		for(int j=0;j<2+i;j++){
			cout<<"*"<<" ";
		}
		for(int h=2*(2*(r-1)-1);h>0;h--){
			cout<<" ";
		}
		for(int j=0;j<2+i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	for(int u=1;u<=n;u++){
			cout<<"*"<<" ";
		}
}