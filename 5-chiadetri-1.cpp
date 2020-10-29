#include<iostream>
using namespace std;
int const MAX=100;
int A[MAX];
char B[]={'0','A','B'};
int f(int n){
	A[0]=0;
	A[1]=1;
	A[2]=1;
	for(int i=3;i<=n;i++)
	A[i]=A[i-1]+A[i-2];
	return A[n];
}
char tk(int m,int n){
	if(m>A[n])
	return '0';
	if(n<=2)return B[n];
	if(m>A[n-2]){
		return tk(m-A[n-2],n-1);
	}else
	return tk(m,n-2);
}
int main(){
int m,n;
cin>>m>>n;
f(n);
cout<<tk(m,n);
	return 0;
}
