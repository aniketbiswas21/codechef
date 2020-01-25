#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int z;
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
	for(int i=1;i<=n-1;i++
		){
		for(int j=1;j<=2*i;j++){
			cout<<" ";
		}
		for(int y=n-i,k=1;k<=n-i;k++,y++){
			cout<<y<<" ";
			z=y;
		}
	for(int y=z-1,k=1;k<=n-i-1;k++,y--){
			cout<<y<<" ";
		}
		cout<<endl;	
	}
}