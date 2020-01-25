#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int y=2*(2*(n-i)-1);y>0;y--){
			cout<<" ";
		}
		for(int l=i;l>0;l--){
			cout<<l<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	for(int i=n-1;i>0;i--){
		cout<<i<<" ";
	}
}