#include<iostream>
using namespace std;
int main(){
	int j;
	cin>>j;
	for(int z=1;z<=j-1;z++){
		cout<<" ";
	}
	for(int k=1;k<=j;k++){
		cout<<"*";
	}
	cout<<endl;
	for(int row=2;row<=j-1;row++){
		for(int i=0;i<j-row;i++){
			cout<<" ";
		}
		cout<<"*";
		for(int t=1;t<=j-2;t++){
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	for(int k=1;k<=j;k++){
		cout<<"*";
	}



	}
