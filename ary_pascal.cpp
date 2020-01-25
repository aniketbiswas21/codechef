 #include <iostream>
using namespace std;
int fact(int t){
	int ans=1;
	for(int i=1;i<=t;i++){
		ans=ans*i;
	}
	return ans;
}
int ncr(int x, int y){
	int ans2=fact(x)/(fact(y)*fact(x-y));
	return ans2;
}
int main(){
	int n;
	cin>>n;
	for(int row=1;row<=n;row++){
		for (int col=1;col<=row;col++){
			cout<<ncr(row-1,col-1)<<'\t';
		}
		cout<<endl;
	}
	return 0;
}