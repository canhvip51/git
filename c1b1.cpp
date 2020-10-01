#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
unsigned long long int luy_thua(int a,int b){
	int d=1;
	while(b>1){
		if(b&1==1)
		d*=a;
		b>>=1;
		a*=a;
	}
	return a*d;
}
int main(){
	cout<<luy_thua(2,10);
	return 0;
}
