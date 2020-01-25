#include<iostream>
#include<climits>
using namespace std;
int main(){
	int t,n;
	int ans=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max=INT_MIN;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<i;j++){
				if(a[j]%a[i]==0){
					ans++;
				}
			}
			if(ans>=max){
				max=ans;
						}
			ans=0;
		}
		cout<<max<<endl;
	}
}