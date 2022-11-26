#include<iostream>
#include<math.h>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n-1 ; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
  selectionSort(a,n);
  int t=a[0];
	
	long long walk=0;
	for(int i=n-1;i>=0;i--){
		walk=walk+a[i]*pow(2,n-i-1);
	}
	cout<<walk;
}