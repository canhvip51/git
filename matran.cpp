#include<iostream>
using namespace std;
void p(int n){
	if(n>1)
	p(n-1);
	cout<<0<<" ";
}
void mt(int m,int n){
	for(int i=0; i<m;i++){
		p(n);
	cout<<endl;
	}
}
int main(){
mt(3,2);
return 0;
}
