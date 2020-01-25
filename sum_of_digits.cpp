#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int no;
	int ans;
	for(int i=0;i<t;i++){
		cin>>no;
		ans=0;
		while(no!=0){
			
			ans=ans+no%10;
			no=no/10;

		}
		cout<<ans<<endl;
	}
}