#include<iostream>
using namespace std;
struct strack{
long int top;
long int size;
long int *s;
}st;
void push();
long int pop();
void maximum();
int main()
{
long int n;
	cin>>n;
	st.size=n;
	st.top=0;
	st.s=(long int*)malloc(st.size*sizeof(long int));
	while(n--){
		int c;
		cin>>c;
		switch(c){
		case 1:
		 push();
		 break;
		 
		 case 2:
		 pop();
		 break;
		 
		 case 3:
		 maximum();
		 break;
		 
		 default: 
		 return 0;
		}
	}	
}
	void push(){
	long int num;
		if(st.size-1>=st.top)
			cin>>num;
			st.s[st.top]=num;
			st.top=st.top+1;
	}
long int pop(){
	long int num;
		if(st.top>=1)
			num=st.top;
			st.top--;
		return num;
	}
	void maximum(){
		long int max =st.s[0];
			for(long int i=0;i<st.top;i++){
			if(st.s[i]>max)
			
				max=st.s[i];
			
			}
			cout<<max<<endl;
	}
			
			
		
		