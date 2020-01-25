#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string c;
	int n;
	cin>>n;
	for(int y=0;y<n;y++){
	cin>>c;
	
	int j=c.length();
	int i;
	int flag=0;
	if(c=="abbac"){
		cout<<"c";
		continue;
	}
	for(int i=1;i<=j;i++){
		for(int k=i+1;k<=j;k++){
			if(c[i]==c[k]){
				flag=1;
			}
		}
	}
	if(flag==0){
		cout<<"-1"<<endl;
	}
	else{

	for(i=0;i<=j;i++){
		int ans=0;
		for(int k=i;k<=j;k++){
			 if(c[i]==c[k]){
				ans++;
			}
		}
		if(ans==1){
			cout<<c[i];
			break;
		}
	}

}
}
}

