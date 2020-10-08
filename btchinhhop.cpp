#include<iostream>
using namespace std;
int const MAX=10;
int a[MAX],n,k;
bool b[MAX];
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
	for(int i=1;i<=n;i++){
		if(!b[i]){
			b[i]=true;
			a[m]=i;
			gen(m+1);
			b[i]=false;	
		}
	}
}
int main(){
	cin>>n;
	k=n;
	gen(1);
	return 0;
}
