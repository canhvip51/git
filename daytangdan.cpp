#include <iostream>
#include <vector>
using namespace std;
int const MAX=100;
struct search{
	vector <int>strl;
	vector <int>strr;
};
int main() {
	int n=9;
	int NUM[]={5, 1, 4, 2, 3, 9,7, 8, 6}; 
	search A;
	for(int i=0;i<n;i++){
		search KQ;
		KQ.strl.push_back(NUM[i]);
		KQ.strr.push_back(NUM[i]);
		for(int j=i-1;j>0;j--){
			if(NUM[j]<KQ.strl.back())
			KQ.strl.push_back(NUM[j]);
		}
		for(int j=i+1;j<n;j++){
			if(NUM[j]>KQ.strr.back())
			KQ.strr.push_back(NUM[j]);
		}
		if(A.strl.size()+A.strr.size()<KQ.strl.size()+KQ.strr.size())
		{
			A.strl=KQ.strl;
			A.strr=KQ.strr;
		}
	}
	cout<<A.strl.size()+A.strr.size()-1<<endl;
	for(int i=A.strl.size()-1; i>0;i--){
		cout<<A.strl[i]<<" ";
	}
	for(int i=0; i<A.strr.size();i++)
	cout<<A.strr[i]<<" ";
	return 0;
}
