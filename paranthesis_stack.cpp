#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
  int n;
  cin>>n;
 while(n--){
  	int flag=0;
  stack<char>st;
	string s;
	cin>>s;
    if(s.length()%2==0){
    	 
    	 for(int i=0;i<s.length();i++){
    	 	
    	 	if(s[i]=='{' || s[i]=='(' || s[i]=='['){
    	 	   st.push(s[i]);}
    	 	  else{
    	 	  if(!st.empty()){
    	 	  	if(s[i]=='}' && st.top()=='{' || s[i]==')' && st.top()=='(' || s[i]==']'&& st.top()=='['){
    	 	  	st.pop();}
    	 	  
    	 	  else{
    	 	      flag=1;
    	 	      break;
    	 	  }
    	 	  }
    	 	  else{
    	 	  flag=1;
    	 	  break;}
    	 	  }
    	
    }
    }
    	else{
    	flag=1;}
    
    
    	if( st.empty() &&flag==0)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
  
}
}
