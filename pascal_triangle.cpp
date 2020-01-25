#include<iostream>
using namespace std;
int fact(int t){
	int ans=1;
	for(int i=1;i<=t;i++){
		ans=ans*i;
	}
	return ans;
}
int facto(int o,int p){
	int g=fact(o)/(fact(o-p)*fact(p));
	return g;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int s=1;s<=n-i;s++){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){
				cout<<facto(i-1,j-1)<<" ";
					
			
		}
		cout<<endl;
		
		
	}
	return 0;
}


 