#include<iostream>
using namespace std;
 
struct stack
{
	int size;
int top; 
int *s;
 
} st; 
 
void push(); 
int  pop();  
void display();
void peek();
int maximum();
int main()
{
int c;
st.top=-1; 
cout<<"enter the size of stack\n";
cin>>st.size;
st.s=(int *)malloc(st.size* sizeof(int)); 
while(1) 
  {
cout<<"\n Pointer is at : \t"<<st.top+1<<endl; 
cout<<"\n Please enter your choice :"<<endl<<"1: Push"<<endl<<"2: Pop"<<endl<<"3: Peek"<<endl<<"4: Display"<<endl<<"5: Maximum"<<endl<<"6: Exit"<<endl;
cin>>c;
    switch(c)
    {
 
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
        case 5:
      cout<<maximum();
        break;
    case 6:
        return 0;
    default:cout<<"invalid input\n";
    }
  }
}
 
void push()
{
    int num;
    if(st.top==(st.size-1))
    {
        cout<<"\n Sorry stack overflow";
    }
    else
    {
    cout<<"\n Enter the number to push into stack";
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
    cout<<"\nstack is empty "<<endl;
    }
    else
    {
    num=st.top;
    cout<<"\n Poped number is : "<<*(st.s+num);
    st.top-=1; 
    }
    return num;
 
}
void peek()
{
	int pos;
	int x=-1;
	cout<<"Enter the position you want to see\n";
	cin>>pos;
	if(st.top-pos+1<0)
	cout<<"Invalid Position\n";
	else
	x=st.s[st.top-pos+1];
    cout<<x<<"\n";
}
void display()
{
    if(st.top==-1)
    {
    cout<<"\n Stack is empty"<<endl;
    }
    else
    {  cout<<"stack entries--------\n";
    for(int i=st.top;i>=0;i--)
        {
        cout<<st.s[i]<<" "<<endl;
        }
    }
}
int maximum()
{
	int max=st.s[0];
	for(int i=0;i<=st.top;i++){
		if(st.s[i]>max){
			max=st.s[i];
		}
	}
//	cout<<max;
//return max;
}
		