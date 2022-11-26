#include<iostream>
using namespace std;
struct strack{
int top;
int size;
int *s;
}st;
void push();
int pop();
int main()
{
long int t;
	cin>>t;
	while(t!=0){
		cin>>st.size;
	st.top=-1;
	st.s=( int*)malloc(st.size*sizeof( int));
	
	while(st.size--){
		int c;
		cin>>c;
		switch(c){
		case 1:
		 push();
		 break;
		 
		 case 2:
		 pop();
		 break;
		 
		 default: 
		 return 0;
		 break;
		}
	}	t--;
cout<<endl;}
}
void push()
{
    int num;
/*    if(st.top==(st.size-1))
    {
        cout<<"\n Sorry stack overflow";
    }
    else*/
    {
    cin>>num;
    st.top+=1;
    st.s[st.top]= num;
 
    }
}
 
int pop()
{
    int num;
  if(st.top==-1)
    {
    cout<<"-1 ";
    }
    else
    {
    num=st.top;
    cout<<st.s[num]<<" ";
    st.top-=1; 
    }
    return num;
 
}