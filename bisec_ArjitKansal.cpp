#include<bits/stdc++.h>
using namespace std;

double funVal(double x) {
	return (39.27*x*x*x) + (31.416*x*x) + (79173.9314*x) - 63.6174;
}
void solve(int n,double l,double r) {
	double mid;
	if (funVal(l)==0) {
		cout<<l<<"\n";
		return;
	}
	if (funVal(r)==0) {
		cout<<r<<"\n";
		return;
	}
	if (funVal(l)*funVal(r) > 0) {
		cout<<"Invalid Range\n";
		return;
	}
	for (int i=0;i<n;i++) {
		mid = (l+r)/2.0;
		if (funVal(mid) == 0) {
			break;
		}
		if (funVal(l)*funVal(mid) < 0) {
			r = mid;
		}
		else {
			l = mid;
		}
	}
	cout<<mid;
}
int main() {
	int n;
	double l,r;

	//cout<<fixed<<setprecision(20)<<funVal(0.000803514)<<endl;
	//return 0;

	cout<<"Enter no. of iterations: ";
	cin>>n;

	cout<<"Starting Range: ";
	cin>>l>>r;

	solve(n,l,r);
	return 0;
}
