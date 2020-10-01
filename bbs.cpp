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
		cout<<find(o+0,o+3,open.top())-o<<" ";
		cout<<find(c+0,c+3,str[i])-c<<endl;
		cout<<open.top()<<endl;
		if(find(o+0,o+3,str[0])-o!=3)
		open.push(str[i]);
		else{
			
			if(find(o+0,o+3,open.top())-o==find(c+0,c+3,str[i])-c){
			open.pop();
		}
		else 
		{
			cout<<"NO";
			return 0;
		}
	}
	
	}
	cout<<"YES";
	return 0;
}
