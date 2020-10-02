#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;
double f(double a,double b,double c,double d, double x){
	return roundf((a*pow(x,3)+b*pow(x,2)+c*x+d) * 100000) / 100000 ;
}
double ng(double a,double b,double c,double d, double x, double y){
	if(roundf(f(a,b,c,d,x)* 10000) / 10000*roundf(f(a,b,c,d,y)* 10000)/ 10000==0){
		if(roundf(f(a,b,c,d,x)* 10000) / 10000==0)
		return x ;
		if(roundf(f(a,b,c,d,y)* 10000)/ 10000==0)
		return y ;
	}	
	else if(f(a,b,c,d,x)*f(a,b,c,d,y)!=0){
		if(f(a,b,c,d,x)*f(a,b,c,d,(x+y)/2)>0){
			x=roundf((x+y)/2 * 100000) / 100000 ;
		return ng(a,b,c,d,x,y);
	}
		else if(f(a,b,c,d,y)*f(a,b,c,d,(x+y)/2)>0)
		{
			y=roundf((x+y)/2 * 100000) / 100000 ;
			return ng(a,b,c,d,x,y);
		}
	}
}
int main(){
cout<<ng(1,2,3,4,-5,5);
return 0;
}
