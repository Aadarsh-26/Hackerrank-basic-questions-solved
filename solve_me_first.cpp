#include<iostream>
#include<string>
using namespace std;
int solvemefirst(int *x,int *y)
{
   int s;
   s=*x+*y;
   return s;
}


int main()
{
	int a,b;
	cin>>a>>b;
   int sum= solvemefirst(&a,&b);
    cout<<sum;
	return 0;
}