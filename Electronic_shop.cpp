#include<iostream>
#include<climits>
using namespace std;
int add(int a,int b){
	int s=a+b;
	return s;
}
int main(){
	int b,n,m;
	cin>>b;
	cin>>n>>m;
	int k[n];
	int U[m];
	for(int i=0;i<n;i++){
		cin>>k[i];
	}
	for(int i=0;i<m;i++){
		cin>>U[i];
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<m;j++)
		{
			if(add(k[i],U[j])<=b){
			        if(add(k[i],U[j])>max){
			        	max=add(k[i],U[j]);
			}
		}
	}
	}
	if(max!=INT_MIN){
		cout<<max;
		}
		else
		cout<<"-1";
}