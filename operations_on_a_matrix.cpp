#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int ans=0;
		for(int z=1;z<=t;z++){
			int n,m,q;
		cin>>n>>m>>q;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				a[i][j]=0;
		}
	}
		for(int u=1;u<=q;u++){
			int x,y;
			cin>>x>>y;
			/*a[x-1][y-1]=a[x-1][y-1]+1;
			a[x][y-1]=a[x][y-1]+1;
			a[x-1][y]=a[x-1][y]+1;*/
			for(int i,j=0;i<m,j<n;i++,j++){
				a[x-1][i]=a[x-1][i]+1;
			}
			for(int j=0;j<n;j++){
				a[j][y-1]=a[j][y-1]+1;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]%2!=0){
					ans++;
				}
			}

		}
		cout<<ans<<endl;
		ans=0;
		
		/*for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
}
}