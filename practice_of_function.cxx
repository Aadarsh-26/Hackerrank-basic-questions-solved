#include<iostream>
using namespace std;
int power(int a, int b)
{
	int pow=1;
	for(int i=0;i<b; i++)
	{
		pow=pow*a;
	}
	return pow;
}

int main()
{
	int x ,y ;
cout<<"Enter base :";
	cin>>x;
	cout<<"\n Enter exp :";
	cin>>y;
	
  if(power(x,y)>=9)
  {
  	cout<<power(x,y);
  }
  else
  {
  	cout<<" No";
  }
  
}