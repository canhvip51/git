#include<iostream>
using namespace std;
int R[5][5]={
	{3,0,0,0,0},
	{1,5,0,0,0},
	{7,2,8,0,0},
	{8,3,5,6,0},
	{1,9,3,7,3}};
	int KQ[5];
int main(){
	int n=5;
	for(int i=1;i<n;i++){
			for(int j=0;j<=i+1;j++){
				R[i][j]=R[i][j]+max((j-1>-1?R[i-1][j-1]:0),max((j+1<n?R[i-1][j+1]:0),R[i-1][j]));
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0; j<i+1;j++)
		cout<<R[i][j]<<" ";
		cout<<endl;
		}
		int m = R[n-1][0];
		KQ[n-1]=0;
		for(int i=1;i<n;i++)
		if(m<R[n-1][i]){
			m=R[n-1][i];
			KQ[n-1]=i+1;
		}
		cout<<m;
		
}
