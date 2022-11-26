#include<iostream>
using namespace std;
int main()
{
	
	long int N;
	 long  int num=0;
	 cin>>N;
	 int A[N];
	 for(int i=0; i<=N-1; i++)
	 {
	 	cin>>A[i];
	 }
	
	 int rem=A[N-1]%10;

	 if(rem%10==0)
	 {
	 	cout<<"Yes";
	 }
	 else
	 {
	 cout<<"No";
	 }
	 
	 return 0;
}