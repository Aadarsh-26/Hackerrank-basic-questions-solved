#include<iostream>
using namespace std;
 struct Rectangle
 {
     int length;
     int bredth;
 };
int area(struct Rectangle r){
    return r.length*r.bredth;
}
void initialise(struct Rectangle *r,int p,int q){
    r->length=p;
    r->bredth=q;
}
 int main(){
     Rectangle r;
     int l,b;
     cin>>l>>b;
    initialise(&r,l,b);
     cout<<area(r);
 }
 