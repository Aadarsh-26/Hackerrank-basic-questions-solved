#include<iostream>
using namespace std;
int main()
{
	double m,tip,tax;
	cin>>m>>tip>>tax;
	double ct=m*(tip/100);
	double ct2=m*(tax/100);
	double total=m+ct+ct2;
	int total2= m+ct+ct2;
	if((total -total2) >0.500)
	cout<<total2 +1;
	else
	cout<<total2;
	return 0;
}