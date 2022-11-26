#include<iostream>
using namespace std;
struct strack{
int top;
int size=100;
int *s;
}st;
void push();
void pop();
int main()
{
int t;
	cin>>t;
	/*st.s=( int*)malloc(st.size*sizeof( int));
	st.top=-1;*/
	while(t!=0){
		int m;
		cin>>m;
		st.top=-1;
			st.s=( int*)malloc(st.size*sizeof( int));
	while(m--){
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
}cout<<endl;
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
 
void pop()
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
 
}


			
			
		
		