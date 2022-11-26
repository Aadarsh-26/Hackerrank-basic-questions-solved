#include<iostream>
using namespace std;
int main()
{
	float v1=0.34;
//	int v2[3000];
//	float *fp;
float *fp;
	fp=&v1;
	cout<<"Address of "<<v1<<"is "<<fp<<endl<<*fp;
//	cout<<"\nAddress of v2 is :"<<&v2;
}