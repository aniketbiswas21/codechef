#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*i;j++){
			cout<<" ";
		}
		for(int y=n-i;y>=0;y--){
			cout<<y<<" ";
		}
		for(int o=1;o<=n-i;o++){
			cout<<o<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<2*(n);i++){
		cout<<" ";
	}
	cout<<0<<endl;
	for(int i=1;i<=n;i++){
		for(int j=0;j<2*(n-i);j++){
			cout<<" ";
		}
		for(int k=i;k>=0;k--){
			cout<<k<<" ";
		}
		for(int y=1;y<=i;y++){
			cout<<y<<" ";
		}
		cout<<endl;
	}
}