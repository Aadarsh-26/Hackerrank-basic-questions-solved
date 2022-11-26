#include<iostream>
using namespace std;
int main()
{
	int day;
	int year;
	cin>>year;
	
	if(year%4==0){
		if(year%100==0){
		     if(year%400==0){
		     	day=12;
		     }
		     else
		     {
		     	day=13;
		     }
		}
		     else{
		     	day=12;}
		}
		else
		{
			day=13;	
	}
	cout<<day<<".09."<<year;
}
		     
			
	