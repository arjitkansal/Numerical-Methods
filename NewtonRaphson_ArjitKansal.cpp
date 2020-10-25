#include<bits/stdc++.h>
using namespace std;

double df(double x) {
    return (x+1.0)*exp(x) + sin(x);
}
double f(double x) {
	return x*exp(x) - cos(x);
}
void solve(int n,double x0) {
	for (int i=1; i<=n; i++) {
        double x = x0 - f(x0)/df(x0);
        x0 = x;
	}
	cout<<fixed<<setprecision(5)<<x0;
}
int main() {
	int n;
	double x0;

	cout<<"Enter no. of iterations: ";
	cin>>n;

	cout<<"Starting Range: ";
	cin>>x0;

	solve(n,x0);
	return 0;
}
