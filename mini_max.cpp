#include<iostream>
using namespace std;
int main()
{
	long int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	long int min=a[0];
	long max= a[0];
	for (int j = 0; j < 5; j++) {
    if(a[j]<min)
    min=a[j];
	}
    for(int i=0;i<5;i++){
   if(a[i]>max)
   max=a[i];
   }
 long  long int s=a[0]+a[1]+a[2]+a[3]+a[4];
  cout<<s-max<<" "<<(s-min);
   
	}