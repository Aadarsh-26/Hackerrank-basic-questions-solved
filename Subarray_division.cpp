#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	      cin>>a[i];
	}
	      int d,m;
	     int count=0;
	      cin>>d>>m;
	      for(int i=0;i<n;i++){
	      	int sum=0;
	      	for(int j=0;j<m;j++){
	      	  sum=sum+a[i+j];
	      	  if(j==m-1){
	      	  if(sum==d)
	      	  {
	      	  	count++;
	      	  }
	      	}
	      }
	      }
	      cout<<count;
}

	