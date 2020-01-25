#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int flag=1;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n-1;i++){
			if(n%i==0){
				flag=0;
				break;
			}
			else if(n%i!=0){
				flag=1;
			}
		}
		if(flag==0){
			cout<<"Not prime"<<endl;
		}
		else if(flag==1){
			cout<<"Prime"<<endl;
		}
	}
}