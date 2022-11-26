#include<iostream>
#include<string>
using namespace std;
struct info
{
	int age;
	string name;
	string address;
	int standard;
};
int main()
{
	struct info i;
	cin>>i.age>>i.name>>i.address>>i.standard;
	cout<<i.age<<"\n"<<i.address<<", "<<i.name<<"\n"<<i.standard<<endl<<endl; 
		cout<<i.age<<","<<i.name<<","<<i.address<<","<<i.standard<<endl;
	
	return 0;
}