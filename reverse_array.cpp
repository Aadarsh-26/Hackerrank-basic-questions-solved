#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	 int N,i;
 	long long int p=1, m=pow(10,9)+7;
	 cin>>N;
	 int A[N];
	 for(int i=0; i<=N-1; i++)
	 {
	 	cin>>A[i];
	 }
	 for(i=N-1;i>=0;i--)
	 {
	 	cout<<A[i]<<" ";
	 }
}