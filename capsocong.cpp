#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int A[n];
		for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A+0, A+n);
	int dem=0;
	int kc,count,next;
	for(int i=4;i<n;i++){
		for(int j=i-1;j>2;j--){
			count=0;
			kc=abs(A[i]-A[j]);
			next=abs(A[i]-A[j]);
				for(int k=j-1;k>-1;k--){
				if(abs(A[j]-A[k])==next){
					next+=kc;
					count++;
				}
				if(count==3){
				dem++;
				break;
				}
			}
		}
	}
	cout<<dem;
}
//10
//9 7 5 3 1 2 4 6 8 0

