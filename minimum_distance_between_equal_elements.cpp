#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				if(min>j-i){
					min=j-i;
				}
			}
		}
	}
	if(min==INT_MAX){
		cout<<"-1";
	}
	else
	cout<<min;
}