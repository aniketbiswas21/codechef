#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<2*n-1;i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		for(int y=0;y<2*i-1;y++){
			cout<<" ";
		}
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}

		cout<<endl;
	}
	for(int i=n-2;i!=0;i--){
		for(int j=n-i;j!=0;j--){
			cout<<"*";
		}
		for(int k=2*i-1;k>=1;k--){
			cout<<" ";
		}
		for(int j=n-i;j!=0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<2*n-1;i++){
		cout<<"*";
	}

return 0;
}