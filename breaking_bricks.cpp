#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector <int> v;
	int count=0;
	while(t--){
		int s;
		cin>>s;
		int w1,w2,w3;
		v.push_back(w1);
		v.push_back(w2);
		v.push_back(w3);
		if(w3==s||(w3<=s&& w3+w2>s)){
			v.pop_back();
			count++;
		}
		else if(w3+w2<=s&&(w3+w2+w1>s)){
			v.pop_back();
			count++;
			v.pop_back();
			count++;
		}
		else if(w3+w2+w1<=s){
			
		}
	}
}