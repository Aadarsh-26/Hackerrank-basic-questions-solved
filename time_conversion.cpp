#include<iostream>
#include<string>
using namespace std;
int main()
{

   string s ;
   cin>>s;
    int h1=(int)s[0]-'0';
    int h2=(int)s[1]-'0';
    int hour=h1*10+h2%10;
    if(s[8]=='P'||s[8]=='p')
    {
    	if(hour<12){
    	hour=hour+12;
    	cout<<hour;
    	for(int i=2;i<=7;i++)
    	{
    		cout<<s[i];
    	}
    	}
    else if(hour>=12)
    	{
    		cout<<hour;
    		for(int i=2;i<=7;i++)
    		{
    			cout<<s[i];
    		}
    	}
    		
    }
    else if (s[8]=='A'||s[8]=='a'){
    	if(hour==12){
    	cout<<"00";
    	for(int i=2;i<=7;i++){
    	cout<<s[i];
    	}
    	}
    	else if(hour>=10){
    	cout<<hour;
    	for(int i=2;i<=7;i++){
    	cout<<s[i];
    	}
    	}
    	
    	
    	else{
    	cout<<'0'<<hour;
    	for(int i=2;i<=7;i++){
    	cout<<s[i];}
    	}
    	
}
}