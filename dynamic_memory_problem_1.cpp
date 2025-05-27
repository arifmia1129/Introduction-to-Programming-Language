// problem 1
#include<bits/stdc++.h>
using namespace std;



int main () {
    int n;

    cin >> n;

    int* a = new int[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;

    cin >> m;

    int* b = new int[m + 1];

    for(int i = 0; i < n; i++) {
       b[i] = a[i];
    }

    for(int i = n; i < m; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }

    delete[] a;
    
    return 0;
}