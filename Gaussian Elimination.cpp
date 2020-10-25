#include<bits/stdc++.h>
using namespace std;

const int n = 4;
double a[][n+2] = {{5,1,1,1,4},{1,7,1,1,12},{1,1,6,1,-5},{1,1,1,4,-6}};
double ans[n+1];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            double temp = (a[j][i]/a[i][i]);
            for (int k=i;k<n+1;k++) {
                a[j][k] = a[j][k] - temp*a[i][k];
            }
        }
	}
	for (int i=n-1;i>=0;i--) {
        double sum = 0.0;
        for (int j=i+1;j<n;j++) {
            sum += a[i][j]*ans[j];
        }
        sum = a[i][n] - sum;
        ans[i] = sum/a[i][i];
	}
	cout<<"Auxillary Matrix : \n";
	for (int i=0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            if (a[i][j] < 1e-9) {
                a[i][j] = 0;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
	}
	cout<<"Solution : \n";
	for (int i=0; i<n; i++) {
        cout<<"x"<<(i+1)<<" = "<<ans[i]<<"\n";
	}
}
