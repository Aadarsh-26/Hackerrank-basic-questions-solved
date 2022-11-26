#include<iostream>
using namespace std;
int main(){
	int d1,d2,m1,m2,y1,y2;
	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;
	int day_late=d1-d2;
	int month_late=m1-m2;
	int year_late=y1-y2;
	
	if(day_late!=0 && month_late==0 && year_late==0){
		if(day_late>0){
			cout<<(day_late)*15;
		}
		else
		cout<<"0";
	}
	if(month_late!=0 && year_late==0){
		if(month_late>0){
			cout<<(month_late)*500;
		}
		else
		cout<<"0";
	}
	if(year_late!=0){
		if(year_late>0){
			cout<<"10000";
		}
		else
		cout<<"0";
	}
	if(day_late==0 && month_late==0 && year_late==0){
		cout<<"0";
	}

}