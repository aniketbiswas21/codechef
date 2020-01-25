#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    double q,a,d,n,x,u;
    float r;
    cin>>q;
    for(int i=0;i<q;i++){
    	cin>>a>>d>>n>>x;
    	int ans=0;
    	for(double w=1;w<=n;w++){
    	u=sqrt(x/(d*w-a),w-1);
    	ans=ans+u;

    }
    ans=r;
    cout<<fixed<<showpoint<<setprecision(12)<<r;
}
    return 0;
}
