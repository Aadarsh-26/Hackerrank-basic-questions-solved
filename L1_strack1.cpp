#include<iostream>
using namespace std;
struct strack{
	int top;
	int *s;
	int size;
}st;
void push();
void display();
int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		st.top=-1;
		cin>>st.size;
		st.s=(int*)malloc(st.size*sizeof(int));
		while(st.size-1>=st.top){
		push();
		}
		display();
	t--;
	}
	
}
	void push()
	{
		st.top=st.top+1;
		if(st.size-1>=st.top){
		int a;
		cin>>a;
	//	st.top=st.top+1;
		st.s[st.top]=a;
	}
	}
	void display()
	{
		    for(int i=st.top-1;i>=0;i--)
        {
        cout<<st.s[i]<<" ";
        }
        cout<<endl;
	}

		
	