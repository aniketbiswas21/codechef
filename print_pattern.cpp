#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n/2;
    for(int i=1,r=p;i<=p,r>0;i++,r--){
        for(int j=1;j<=2*r;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    for(int i=p,r=1;i>0,r<=p;i--,r++){
        for(int q=1;q<=2*r;q++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
