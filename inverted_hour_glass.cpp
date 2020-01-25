#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<n;
	for(int i=0;i<=2*(2*n-1);i++){
		cout<<" ";
	}
	cout<<n<<endl;
	for(int i=2,j=n-1;i<=n,j>0;i++,j--){
		for(int k=0,g=n;k<i,g>=j;k++,g--){
			cout<<g<<" ";
			
		}
		for(int y=0;y<2*(2*j-1);y++){
			cout<<" ";
		}
		for(int k=0,h=j;k<i,h<=n;k++,h++){
			cout<<h<<" ";
		}
		cout<<endl;

	}
		for(int i=0;i<n;i++){
		cout<<n-i<<" ";
	}
	cout<<0<<" ";
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=1,j=n;i<n,j>0;i++,j--){
		for(int k=n;k>=i;k--){
			cout<<k<<" ";
			
		}
		for(int y=0;y<2*(2*i-1);y++){
			cout<<" ";
		}
		for(int h=i;h<=n;h++){
			cout<<h<<" ";
		}
		cout<<endl;

	}

}