#include<bits/stdc++.h>
using namespace std;
long double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;

long double f(long double x) {
    return (long double)sqrt(cos(x));
}
long double solve(int n) {
    long double h = pi/(2.0*n);
    long double x = 0.0;

    long double ans = 0.0;
    for (int i=3;i<=n;i+=3) {
        long double f1 = f(x);
        long double f2 = f(x+h);
        long double f3 = f(x+2.0*h);
        long double f4 = f(x+3.0*h);

        ans += (3.0*h*(f1+3.0*f2+3.0*f3+f4))/8.0;
        x += 3.0*h;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the no. of divisions (Multiple of 3): ";
    cin>>n;
    cout<<fixed<<setprecision(20)<<solve(n)<<endl;
}
