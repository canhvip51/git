#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX],n;
int sum=0,vt=0;
void print(int x){
	for( int i=1;i<x;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void gen(int k){
	if(sum==n||k>n)
	{
		if(sum==n)
		print(k);
		sum-=a[vt];
		vt--;
		return;
	}
	for(int i=1; i<=n;i++){
		a[k]=i;
		if(sum+a[k]>n){
			
		break;
		}
		sum+=a[k];
		vt++;
		gen(k+1);
	}
	sum-=a[vt];
	vt--;
	return;
}
int main(){
	n=4;
	gen(1);
}
