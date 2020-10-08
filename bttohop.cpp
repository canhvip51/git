#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX],n,k;
void print(int k){
	for(int i=1;i<=k; i++)
	cout<<a[i];
	cout<<endl;
}
void gen(int m){
	if(m>k){
		print(k); 
		return;	
	}
	for(int i=a[m-1]+1;i<=n;i++){
		a[m]=i;
		gen(m+1);
	}
}
int main(){
	cin>>n>>k;
	gen(1);
}
