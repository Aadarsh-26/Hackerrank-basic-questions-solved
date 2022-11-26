#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	 int N;
 	long long int p=1, m=pow(10,9)+7;
	 cin>>N;
	 int A[N];
	 for(int i=0; i<=N-1; i++)
	 {
	 	cin>>A[i];
	 }
	 for(int i=0;i<=N-1;i++)
	 {
	 	p=(p*A[i])%m;
	 }
	 cout<<p;
	 return 0;
}
	 	