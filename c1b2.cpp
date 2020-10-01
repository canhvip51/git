#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int MAX=100;
vector<int> a(MAX,-1);
unsigned long long int F(vector<int> a,int n){
	a[0]=0;
	a[1]=1;
	if(n>1 && a[n]==-1)
	for(int i=2;i<n+1;i++){
		a[i]=a[i-1]+a[i-2];
		
	}
	return a[n];
}
int main(){
	cout<<F(a,38);
	return 0;
}
