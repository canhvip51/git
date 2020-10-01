#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
	string str;
	cin>>str;
	char o[]={'(','{','['};
	char c[]={')','}',']'};
	stack<char> open;
		for(int i=0;i<str.length();i++)
	{
		if(find(o+0,o+3,str[i])-o!=3){
			open.push(str[i]);
			}
		else{
			if(open.empty()==1)
			{
				cout<<"NO";
				return 0;
			}
			else
			{
				if(find(o+0,o+3,open.top())-o!=find(c+0,c+3,str[i])-c){
				cout<<"NO";
				return 0;
			}
			else 
			open.pop();
			}
		}
	}
	cout<<"YES";
	return 0;
}
