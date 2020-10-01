#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
double f(double a,double b,double c,double d, double x){
	return a*pow(x,3)+b*pow(x,2)+c*x+d;
}
double ng(double a,double b,double c,double d, double x, double y){
	if(f(a,b,c,d,x)*f(a,b,c,d,y)==0){
		if(f(a,b,c,d,x)==0)
		return x;
		if(f(a,b,c,d,y)==0)
		return y;
	}	
	else if(f(a,b,c,d,x)*f(a,b,c,d,y)!=0){
		if(f(a,b,c,d,x)*f(a,b,c,d,(x+y)/2)>0){
		cout<<"x: "<<(x+y)/2<<endl;
		return ng(a,b,c,d,(x+y)/2,y);
	}
		else if(f(a,b,c,d,y)*f(a,b,c,d,(x+y)/2)>0)
		{
			cout<<"y: "<<(x+y)/2<<endl;
			return ng(a,b,c,d,x,(x+y)/2);
		}
	}
}
int main(){
cout<<ng(1,1,1,1,-2,1);
return 0;
}
