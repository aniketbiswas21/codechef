#include <iostream>
#include <iomanip>    
using namespace std;
int main(){
	int n;
	cin>>n;
	float bal;
	cin>>bal;
	if(n%5==0&&(n+0.50)<bal){
			bal=bal-n-0.50;
			cout<<fixed<<showpoint;			//to show value till two decimals 
			cout<<setprecision(2);
			cout<<bal;
	}
	
	else{
		cout<<bal;
}
return 0;
}
