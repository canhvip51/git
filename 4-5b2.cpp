#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX],n;
void print(int n){
	for(int i=1;i<n;i++)
		cout<<a[i];
		cout<<endl;
}
void gen(int k){
	if(k>n)
	{
		print(k);
		return;
	}
	for(int i=0;i<3;i++){
		a[k]=i;
		gen(k+1);
	}
}
int main(){
	n=3;
	gen(1);
	return 0;
}
