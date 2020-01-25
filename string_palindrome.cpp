#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100],b[100];
	int i;
	cin>>a;
	i=strlen(a)-1;
	int flag=1;
	int g=0;
	for(int z=i;z>=0,g<=i;z--,g++){
		b[g]=a[z];
		
	}
for(int h=0;h<=i;h++){
	if(b[h]!=a[h]){
		flag=0;
	}
}
	
	if(flag==1)
	{
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}