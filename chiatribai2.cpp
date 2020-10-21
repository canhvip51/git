#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> a;
int maxleft(vector<int> &a,int first,int end){
	int maxl=a[first];
	for(int i=first+1;i<=end;i++){
		maxl=max(a[i],maxl);
	}
	cout<<"maxl:"<<maxl<<endl;
	return maxl;
}
int maxright(vector<int> &a,int first,int end){
	int maxr=a[first];
	for(int i=first+1;i<=end;i++){
		maxr=max(a[i],maxr);
	}
		cout<<"maxr: "<<maxr<<endl;
	return maxr;
}
int minright(vector<int> &a,int first,int end){
	int minr=a[first];
	for(int i=first+1;i<=end;i++){
		minr=min(a[i],minr);
	}
		cout<<"minr: "<<minr<<endl;
	return minr;
}
int minleft(vector<int> &a,int first,int end){
	int minl=a[first];
	for(int i=first+1;i<=end;i++){
		minl=min(a[i],minl);
	}
		cout<<"minl:"<<minl<<endl;
	return minl;
}
int dif(vector<int> &a,int first,int end){
	if(first==end)return 10000;
	int mid=(first+end)/2;
	int min_left=dif(a,first,mid);
	int min_right=dif(a,mid+1,end);
	int min_mid=min(abs(maxright(a,mid+1,end)-maxleft(a,first,mid)),abs(minright(a,mid+1,end)-minleft(a,first,mid)));
	cout<<" min_left: "<<min_left<<",min_right:"<<min_right<<",min_mid: "<<min_mid<<endl;
	return min(min_left,min(min_right,min_mid));
}


int main(){
	a.push_back(15);
	a.push_back(1);
	a.push_back(13);
	a.push_back(7);
	a.push_back(-4);
	a.push_back(4);
	cout<<dif(a,0,5);
}
