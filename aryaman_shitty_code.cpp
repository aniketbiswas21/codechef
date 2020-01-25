#include<iostream>
using namespace std;
int main(){ 
	int num;
	cin>>num;
	int sum=0;
	int digit=0;
	for(int i=2;i<num;i++){
		if(num%i==0){
			sum=sum+i;
            cout<<sum<<endl;
		i=2;	
		}
    
	}
    cout<<sum<<endl;
	while(num!=0){
		digit=digit+(num%10);
		num=num/10;
	}
    cout<<num<<endl;
	if(sum==digit){
		cout<<1;
	}
	else{
		cout<<0;
	}
    
}