#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
const int MAX = 5;
int s[MAX+1] = { 2, 1, 2, 1, 3, -1 };
int f[MAX] = { 100, 19,27, 25, 15 };
int a[MAX];
bool check[MAX];
vector<int> ht;
bool sapxep1(int i, int j) { return f[i] > f[j]; }
bool sapxep2(int i, int j) { return s[i] > s[j]; }
int main() {
	
	int maxd=s[0];
	for (int i = 0; i < MAX-1; i++){
		maxd=max(maxd,s[i+1]);
	}
	for (int i = 0; i < MAX; i++) a[i] = i;
	sort(a+0, a+MAX, sapxep1);
	sort(a+0, a+MAX, sapxep2);
//	for (int i = 0; i < MAX; i++) cout<<a[i]<<" ";
//	cout<<endl;
	int start=0;
	for(int i=maxd;i>0;i--){
		int m=0;ht.push_back(-1);
		for(int j=start;j<MAX;j++){
			if(m<f[a[j]]&&(s[a[j]]>=i)&&check[a[j]]==false){
				m=f[a[j]];
				ht.pop_back();
				ht.push_back(a[j]);
				start=j+1;
				}
				if(s[a[j]]<i){				
					break;
				}	
			}
			check[ht.back()]=true;
		}
		int s=0;
	for(int i=ht.size()-1;i>-1;i--){
		s+=f[ht[i]];
		cout<<ht[i]<<" ";
	}
	for(int j=0;j<MAX;j++)
	if(check[a[j]]==false)
	cout<<a[j]<<" ";
	cout<<endl<<s;
}
