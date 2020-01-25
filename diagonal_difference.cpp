#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[j][i];
		}
	}
	/*for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[j][i];
		}
		cout<<endl;
}*/
	int ans=0;
	int j;
	for(int i=0;i<n;i++){
		 j=a[i][i];
		 ans=ans+j;
	}
	int k;
	int ans1=0;
	for(int r=n-1,c=0;r>=0,c<n;r--,c++){
		 k=a[r][c];
		 ans1=ans1+k;}
		 int f=ans-ans1;
		 if(f<0){
		 	cout<<-1*f;
		 }
		 else{
		 	cout<<f;
		 }
}