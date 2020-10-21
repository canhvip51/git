#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool sx(int i,int j){
	return i>j;
}
int main(){
	int a[4]={4,3,2,1};int tong=0;
	sort(a+0,a+4,sx);
	for(int i=0;i<4;i++)
	if(a[i]-i>0)
	tong=tong+a[i]-i;
	cout<<tong;
}
