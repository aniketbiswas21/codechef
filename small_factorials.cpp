#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int no;
		cin>>no;
		if(no==0){
			cout<<1<<endl;
		}
		for(int j=no-1;j!=0;j--){
			 no=no*j;
		}
		cout<<no<<endl;
	}
}