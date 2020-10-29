#include<iostream >
using namespace std;
void HN(int n, char a, char b,char c){
	if(n==1){
		cout<<a<<"--->"<<c<<endl;
		return;
	}
	HN(n-1,a,c,b);
	HN(1,a,b,c);
	HN(n-1,b,a,c);
}
int main(){
	int n;
	cin>>n;
	HN(n,'A','B','C');
	return 0;
}
