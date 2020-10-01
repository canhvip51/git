#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
void dem(int a[],int n,int k){
	sort(a+0,a+n);
	int demcap=0;
	for(int i=0;i<n-1;i++)
	{
		if(find(a+0,a+n+1,a[i]+k)-a!=n+1)
		demcap++;
	}
	cout<<dems;
}
int main(){
	int a[]={1,2,5,3,4};
	dem(a,5,3);
	return 0;
}
