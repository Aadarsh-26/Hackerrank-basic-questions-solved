
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
    int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
 while(k--){
       int temp=a[n-1];
	        a[0]=temp;  
	 for(int i=1;i<n;i++){
         a[i]=a[i-1];}  
 }
 for(int i=0;i<n;i++){
	 cout<<a[i];
 }cout<<endl;
	}
}