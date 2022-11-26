#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	 int lim;
	 
	 cin>>lim;
	 while(lim!=0)
	 {
	 	int N,i,f,s,s1=0,s2=0;
	 	int c1,c2;
	 	cin>>c1>>c2;
	 	int m1,m2;
	 	cin>>N;
	 	for(i=1;i<=N;i++)
	 	{
	 		cin>>f>>s;
	 		s1=s1+f;
	 		s2=s2+s;
	 	
	 	if(s1>s2 && c1<c2)
	 	{
	 			m1=s1*c1;
	 		m2=s2*c2;
	 	}
	 	else if(s1<s2 && c2<c1)
	 	{
	 		m1=s1*c1;
	 		m2=s2*c2;
	 	}
	 	else if(s1>s2 && c1>c2){
	 	   m1=s1*c2;
	 	   m2=s2*c1;}
	 	   
	 	   else if(s1<s2 && c2>c1){
	 	   	m1=s1*c2;
	 	   	m2=s2*c1;
	 	   }
	 	   else {
	 	   	m1=s1*c1;
	 	   	m2=s2*c2;
	 	   }
	 	   
	 	   
	 	
	 	}
	 	
	 	 s =m1+m2;
	 	cout<<s;
	 	cout<<endl;
	 	
	 	lim--;
	 }
	 return 0;
}
	 
	 		
	 	