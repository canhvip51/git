#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX];
int f(int n){
	if(n<=2){
		return a[n]=n;
	}
	if(a[n]==0){
	int k=n/3;
	a[3*k]=f(2*k);
	a[3*k+1]=a[3*k]+f(2*k+1);
	a[3*k+2]=a[3*k+1]+f(2*k+2);
	}
return a[n];
}
int main(){
	cout<<f(12);
	return 0;
}
