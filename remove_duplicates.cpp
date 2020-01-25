#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string c;
	cin>>c;
	int j=c.length();
	int i;
	int flag=0;
	for(int i=1;i<=j;i++){
		for(int k=i+1;k<=j;k++){
			if(c[i]==c[k]){
				flag=1;
			}
		}
	}
	if(flag==0){
		cout<<c;
	}
	else{

	for(i=1;i<=j;i++){
		int ans=1;
		for(int k=i;k<=j;k++){
			 if(c[i]==c[k]){
				ans++;
			}
			 else if(ans==1&&c[i]!=c[k]){
				cout<<c[i];
				i=k;
			}
			
			
			else if(ans>1&&c[i]!=c[k]){
				cout<<c[i];
				i=k;
				ans=1;
			}

		}
	}

}
}

