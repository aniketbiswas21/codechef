#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
	int j=s.length();
	for(int i=0;i<j;i++){
		int k=s[i];
		if(k>=65&&k<=90){
			k+=32;
			s[i]=k;
			cout<<s[i];
		}
		else if(k>=97&&k<=122){
			k-=32;
			s[i]=k;
			cout<<s[i];
		}
	}
}