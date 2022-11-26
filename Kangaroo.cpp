#include<iostream>
using namespace std;
int main()
{
	float x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
 float t =(x2-x1)/(-v2+v1);
	if((int)t == (float)t)
	{
		if( x2>x1&&v1>v2)
		cout<<"YES";
		else if(x1>x2 && v2>v1)
		cout<<"YES";
		else if(x1>x2 && v1==v2)
		cout<<"NO";
		else if(x1<x2 && v1==v2)
		cout<<"NO";
		else
		cout<<"NO";
	}
	else{
		cout<<"NO";
	}
	
}
//21 6 47 3 
//0 2 5 3 
//0 3 4 2 