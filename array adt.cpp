#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

int main(){
    struct Array arr;
    cout<<"ENTER SIZE OF ARRAY - "<<endl;
    cin>>arr.size;
    arr.A=new int[arr.size*sizeof(int)];
    int n;
    cout<<"Enter number of elements - "<<endl;
    cin>>n;
    cout<<"Enter all elements - "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;
    
    
}