#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX],n;
int sum=0;
void print(int x){
	for( int i=1;i<x;i++)
	cout<<a[i]<<" ";
}
void gen(int k){
	
	if(sum==4)
	{
		print(k);
		return;
	}
	for(int i=1; i<=n;i++){
		a[k]=i;
		sum+=a[i];
		if(sum>4)return;
		gen(k+1);
	}
}
int main(){
	n=4;
	gen(1);
}
