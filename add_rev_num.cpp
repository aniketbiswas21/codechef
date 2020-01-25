#include<iostream>
using namespace std;
int main(){
	int t;
	int ans,ans1=0;
	int sum1=0;
	cin>>t;
	for(int i=1;i<=t;i++){
		int j,k;
		cin>>j>>k;
		while(j,k!=0){
			int o=j%10;
			int p=k%10;
			ans=10*ans+o;
			ans1=10*ans1+p;
			j=j/10;
			k=k/10;
		}
		int sum=ans+ans1;
		while(sum!=0){
			int q=sum%10;
			sum1=10*sum1+q;
			sum/10;
		}
		cout<<sum1<<endl;
	}
	
}