#include<bits/stdc++.h>
using namespace std;

const int n = 4;
double a[][n+2] = {{2,1,5,1,5},{1,1,-3,4,-1},{3,6,-2,1,8},{2,2,2,-3,2}};
double ans[n+1];
int main() {
	for (int i=0;i<n;i++) {
        double temp = a[i][i];
        for (int j=0;j<=n;j++) {
            a[i][j] /= temp;
        }
        for (int j=0;j<n;j++) {
            if (j!=i) {
                temp = a[j][i];
                for (int k=0;k<=n;k++) {
                    a[j][k] = a[j][k] - temp*a[i][k];
                }
            }
        }
	}
	cout<<"Auxillary Matrix : \n";
	for (int i=0; i<n; i++) {
        for (int j=0; j<=n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        ans[i] = a[i][n];
	}
	cout<<"Solution : \n";
	for (int i=0; i<n; i++) {
        cout<<"x"<<(i+1)<<" = "<<ans[i]<<"\n";
	}
}
