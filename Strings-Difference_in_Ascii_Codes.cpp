#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string c;
	cin>>c;
	int y=c.length();
	for(int i=0;i<y-1;i++){
		int a=c[i];
		int b=c[i+1];
		int z=b-a;
		/*for(int u=0;u<y;u++){
			cout<<c[u]<<z;
		}*/
		cout<<c[i]<<z;

	}
	cout<<c[y-1];
	return 0;
}