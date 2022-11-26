#include <iostream>
using namespace std;

int main()
{
	int L,N,W,H;
	cin>>L;
	cin>>N;
	while(N!=0)
	{
		cin>>W>>H;
		if(L>W || L>H)
		{
		cout<<"UPLOAD ANOTHER"<<endl;
		}
		
	else if (H==W ){
		cout<<"ACCEPTED"<<endl;
		 }
		else{
		cout<<"CROP IT"<<endl;
		}
		
		N--;
	}
	return 0;
}
		
		