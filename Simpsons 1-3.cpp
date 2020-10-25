#include<bits/stdc++.h>
using namespace std;

long double f(long double x) {
    return (long double)1.0/(4.0*x + 5.0);
}
long double solve(int n) {
    long double h = (long double)5.0/n;
    long double x = 0.0;

    long double ans = 0.0;
    for (int i=2;i<=n;i+=2) {
        long double f1 = f(x);
        long double f2 = f(x+h);
        long double f3 = f(x+2.0*h);

        ans += (h*(f1+4.0*f2+f3))/3.0;
        x += 2.0*h;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the no. of divisions (Even): ";
    cin>>n;
    cout<<fixed<<setprecision(20)<<solve(n)<<endl;
}
