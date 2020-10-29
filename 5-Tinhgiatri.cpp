#include<iostream>
#include<cmath>
using namespace std;
int const MAX=300;
int n,x;
int A[MAX];
double P(int A[],int x,int start, int end){
		if(start==end)
	return A[start]*pow(x,n-start);
	int mid=(start+end)/2;
	return P(A,x,start,mid)+P(A,x,mid+1,end);
}
int main(){
	
	cin>>n>>x;
	for(int i;i<=n;i++)
	A[i]=i+1;
	cout<<P(A,x,0,n);
	return 0;
}
