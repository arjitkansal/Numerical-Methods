//Secant Method

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double funVal1(double x) {
	return (x*x*x) + (x*x) + x + 7.0;
}
double funVal2(double x) {
    return (x - exp(-x));
}
void solve(int n,double x0,double x1) {
	double x;
	for (int i=1;i<=n;i++) {
		x = x1 - (x1-x0)/(funVal2(x1)-funVal2(x0))*funVal2(x1);
		x0 = x1;
		x1 =x;
	}
	cout<<fixed<<setprecision(5)<<x;
}
int main() {
	int n;
	double l,r;

	cout<<"Enter no. of iterations: ";
	cin>>n;

	cout<<"Starting Range: ";
	cin>>l>>r;

	solve(n,l,r);
	return 0;
}
