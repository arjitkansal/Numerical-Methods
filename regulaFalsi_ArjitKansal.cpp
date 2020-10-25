#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double funVal1(double x) {

    return (x - exp(-x));
	return (x*x*x) + (x*x) + x + 7.0;
}
void solve(int n,double l,double r) {
	double mid;
	if (funVal1(l)==0) {
		cout<<l<<"\n";
		return;
	}
	if (funVal1(r)==0) {
		cout<<r<<"\n";
		return;
	}
	if (funVal1(l)*funVal1(r) > 0) {
		cout<<"Invalid Range\n";
		return;
	}
	for (int i=0;i<n;i++) {
		mid = l - ((r-l)/(funVal1(r)-funVal1(l)))*funVal1(l);
		if (funVal1(mid) == 0) {
			break;
		}
		if (funVal1(l)*funVal1(mid) < 0) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	cout<<fixed<<setprecision(5)<<mid;
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
