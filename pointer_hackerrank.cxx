#include <iostream>
using namespace std;

void update (int *x, int *y) { 
int a= *x + *y;
int b= *x - *y;
if(b<0)
{
	b=-(*x - *y);
}
cout<<a<<endl<<b;

}

int main() {

int a, b;

cin>>a;
cin>>b;

update (&a, &b);

return 0;

}