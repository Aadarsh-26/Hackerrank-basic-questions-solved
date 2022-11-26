#include<iostream>
using namespace std;
int add(int a,int b){
	int s=a+b;
	return s;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
int count =0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1; j<n;j++)
		{
			if(add(a[i],a[j])!=0 && add(a[i],a[j])%k==0){
			count ++;
			}
		}
	}
	cout<<count;
}
		
		