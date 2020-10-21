#include<iostream>
using namespace std;
int const MAX=100;
int a[MAX],n,dem=0;;
int b[MAX];
int m=100;
void save(int n){
		for(int i=1;i<n;i++)
		b[i]=a[i];
	}
	void print(int n){
			for(int i=1;i<n;i++)
			cout<<a[i];
			cout<<endl;
	}
bool check(int a[],int n){
for(int k=1; k<n-1;k++){
	for(int i=1;i<=n/2;i++){
		string s="";
		string b="";
		for(int j=0;j<i;j++){
			s=s+"1";
			if(a[j+k]==a[i+j+k])
			b=b+"1";
		}
//	cout<<s<<" so sanh "<<b<<endl;
		if(s==b)
		return false;
	}
}	
	return true;
}
void gen(int k){
	if(k>n)
	{
		if(dem<m){
		m=dem;
		save(k);
		print(k);
		}


		dem=0;
		return;
	}
	for(int i=0;i<3;i++){
		a[k]=i;
		if(k==1)
		gen(k+1);
		if(a[k]!=a[k-1]){
			if(check(a,k)==true){
				if(a[k]==2)
				dem++;
				if(dem<m)
				gen(k+1);	
			}	
		}
	}
}
int main(){
	n=15;
	gen(1);
	a[0]=-1;
	for(int i=1;i<=n;i++)
		cout<<b[i];
	return 0;
}
