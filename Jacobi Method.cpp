#include<bits/stdc++.h>
using namespace std;

const int n = 4;

double next_x(double y, double z) {
    return (7.0 + y - z)/4.0;
}

double next_y(double x, double z) {
    return (21.0 + 4.0*x + z)/8.0;
}

double next_z(double x, double y) {
    return (15.0 + 2.0*x - y)/5.0;
}

void jacobi(int n, double x0, double y0, double z0) {
    double x, y, z;
    for (int i=1; i<=n; i++) {
        x = next_x(y0, z0);
        y = next_y(x0, z0);
        z = next_z(x0, y0);
        x0 = x;
        y0 = y;
        z0 = z;
    }
    cout<<"Solution: ";
    cout<<"x = "<<x0<<", y = "<<y0<<", z = "<<z0<<endl;
}
int main() {
    int n;
	cout<<"Enter the no. of iterations: ";
	cin>>n;

	double x0, y0, z0;
	cout<<"Enter starting values: ";
	cin>>x0>>y0>>z0;

	jacobi(n, x0, y0, z0);
}
