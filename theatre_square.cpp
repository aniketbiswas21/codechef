#include<iostream>
using namespace std;
int main(){
	long long n,m,a;
	cin>>n>>m>>a;
	long long i,j,ans;
	i=n%a;
	j=m%a;
	if(i==0&&j==0){
		ans=(n/a)*(m/a);
	}
	else if(i==0&&j!=0){
		ans=(n/a)*(m/a+1);
	}
	else if(i!=0&&j!=0){
		ans=(n/a+1)*(m/a+1);
	
	}
	else if(i!=0&&j==0){
		ans=(n/a+1)*(m/a);
	}
	cout<<ans<<endl;
	return 0;
}