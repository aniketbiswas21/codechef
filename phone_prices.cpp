#include<iostream>
#include<climits>
using namespace std;
int main(){
int n,d;
cin>>n;
for(int p=0;p<n;p++){
cin>>d;
int a[d];
for(int i=0;i<d;i++){
cin>>a[i];
}
int ans=1;
int flag=1;
for(int i=d-1;i>0;i--){
int j=i-5;
if(j<0){
j=0;
}
while(j<=i-1){
if(a[j]<=a[i]){
flag=0;
break;
}
else{
flag=1;
}
j++;
}
if(flag==1){
ans++;
}
}
cout<<ans;
}
}