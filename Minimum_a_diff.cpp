#include<iostream>
#include<climits>
using namespace std;
   long mod(long a, long b){
	long s=a-b;
	if(s<0){
		s=-(s);
		return s;
	}
	else
	return s;
}
int main()
{
	long n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=INT_MAX;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(mod(a[i],a[j])<min){
			min=mod(a[i],a[j]);
		}
		}
	}
	cout<<min;
}