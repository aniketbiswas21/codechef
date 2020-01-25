#include <iostream>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int count;
int a[n];
for(int i=0;i<=n;i++){
cin>>a[i];
if(a[i]%k==0){
	count=count+1;
}
}
cout<<count;

}