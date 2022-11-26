#include<iostream>
using namespace std;
int main()
{
	int n,t,sum=0;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	int c;
	cin>>c;
	int act=(sum-a[t])/2;
	int ov=c-act;
	if(ov==0){
		cout<<"Bon Appetit";
	}
	else
	cout<<ov;
}
	

	
	