#include<iostream>
using namespace std;
void p(int n){
	if(n>1)
	p(n-1);
	cout<<0<<" ";
}
void mt(int m,int n){
	if(n>1){
		p(n-1);
		cout<<0<<" ";	
	}
	if(m>1){
		cout<<endl;
		mt(m-1,n);
	}
}
int main(){
mt(3,5);
return 0;
}
