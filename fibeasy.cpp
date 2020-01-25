#include<iostream>
#include<vector>
using namespace std;
int deleteElement(int arr[], int n, int x) 
{ 
   // If x is last element, nothing to do 
   if (arr[n-1] == x) 
       return (n-1); 
  
   // Start from rightmost element and keep moving 
   // elements one position ahead. 
   int prev = arr[n-1], i; 
   for (i=n-2; i>=0 && arr[i]!=x; i--) 
   { 
       int curr = arr[i]; 
       arr[i] = prev; 
       prev = curr; 
   } 
  
   // If element was not found 
   if (i < 0) 
     return 0; 
  
   // Else move the next element in place of x 
   arr[i] = prev; 
  
   return (n-1); 
} 
int main(){
	int n;
	cin>>n;
	int arr[10000];
	int x=0;
			int y=1;
			int c=x+y;
			int a;
			int l=0;
	for(int i=0;i<n;i++){
		
		cin>>a;
		for(int j=3;j<a;j++){
			
			x=y;
			y=c;
			c=x+y;
			arr[0]=0;
			arr[1]=1;
			arr[2]=1;
			arr[j]=c;

		}
		for(int k=0;k<a;k++){
			int ans=0;
			if(k%2==0){
				deleteElement(arr,a,k);
				
			ans++;
			l=a-ans+1;}
			if(l==1){
				cout<<arr[k];
			}
		}
		
		}
	}
