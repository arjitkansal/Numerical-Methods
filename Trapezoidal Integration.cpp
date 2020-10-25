#include<bits/stdc++.h>
using namespace std;
long double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;

long double f(long double x) {
    return (long double)sin(x);
}
long double solve(int n) {
    long double h = pi/(2.0*n);
    long double x = 0.0;

    long double ans = 0.0;
    for (int i=0;i<n;i++) {
        long double f1 = f(x);
        long double f2 = f(x+h);

        ans += (h*(f1+f2))/2.0;
        x += h;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the no. of divisions: ";
    cin>>n;
    cout<<fixed<<setprecision(20)<<solve(n)<<endl;
}
