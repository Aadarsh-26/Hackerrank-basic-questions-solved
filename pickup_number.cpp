#include<iostream>
#include<climits>
using namespace std;
long int mod(long int a, long int b){
	long int s=a-b;
	if(s<0){
		s=-(s);
		return s;
	}
	else
	return s;
}
int main()
{
	long int n;
	cin>>n;
	long int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	int max=0;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){
			
		if(a[i]==a[j] || a[i]+1==a[j]){
			   count++;
		}
		}
		b[i]=count;
		count=0;
	}
	max=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
		max=b[i];
}
cout<<max;
}
	