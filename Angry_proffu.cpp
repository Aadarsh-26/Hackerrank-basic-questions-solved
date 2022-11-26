#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,k;
	int a=0;
	cin>>n>>k;
	int t[n];
	for(int i=0;i<n;i++){
		cin>>t[i];
		if(t[i]<=0){
			a++;}
	}
	if(a>=k){
		cout<<"NO"<<endl;
	}
	else
	cout<<"YES"<<endl;
}
}