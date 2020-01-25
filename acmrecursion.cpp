#include<iostream>
using namespace std;
void print(int n){
	if(n==1){
		 cout<<1<<endl;
		 cout<<1<<endl;
	}
	else{
		cout<<n<<endl;
		print(n-1);
		cout<<n<<endl;
	}
}

int main(){
print(3);
}