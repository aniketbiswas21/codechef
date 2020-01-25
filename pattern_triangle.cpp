#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=2*(n-i);j>0;j--){
			cout<<" ";
		}
		for(int h=1,g=i;h<=i;h++,g++){
			cout<<g<<" ";
		}
		for(int j=2*(i-1);j>=i;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}