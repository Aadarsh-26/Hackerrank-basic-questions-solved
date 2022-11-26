#include<iostream>
using namespace std;
/*struct strack{
long int top;
long int s[100000];
}st;*/
int main()
{
	long int s[100000];
	long int top;
	long int size;
	cin>>size;
	long int max=s[0];
	top=-1;
//	st.s=(long int*)malloc(st.size*sizeof(long int));
	while(size--){
		int c;
		cin>>c;
		switch(c){
		case 1:
		{
	long int num;
		//if(st.size-1>=st.top)
			cin>>num;
			top++;
			s[top]=num;
			if(s[top]>max)
			max=s[top];
	
		// push();
		 break;
		}
		 
		 case 2:{
	long int num;
		//if(st.top>=1)
		int i;
    if(max == s[top])
		top=top-1;
		for( i= top;i>0;i--){
        if(max < s[i])
            max = s[i];
		}
	//	return num;
		 
		// pop();
		 break;}
		 
		 case 3:{
			cout<<max<<endl;
	}
		 //maximum();
		 break;
		 
		}
	}	
}

			
			
		
	