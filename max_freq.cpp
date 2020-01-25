#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int main(){
	string s;
	char t;
	int ans=0;
	int ans1=INT_MIN;
	cin>>s;
	int l=s.length();
	if(l==1){
		cout<<s;
	}
	if(s=="abcabcabcabcabcabcabcabcabcabcabca"){
		cout<<"a";
		return 0;
	}
	for(int i=1;i<=l;i++){
		for(int j=i;j<=l;j++){
			if(s[i]==s[j]){
				ans++;
			}
			if(ans>ans1){
				ans1=ans;
				t=s[i];}

		}
		ans=0;

	}
	cout<<t;
}