#include<bits/stdc++.h>
using namespace std;

int main () {
    char c;

    cin >> c;

    if(c >= '0' && c <= '9') {
        cout << "IS DIGIT" << endl;
    }

    int is_small = c >= 'a' && c <= 'z';
    int is_capital = c >= 'A' && c <= 'Z';

    if(is_small || is_capital) {
        cout << "ALPHA" << endl;

        if(is_small) {
             cout << "IS SMALL" << endl;
        }else {
            cout << "IS CAPITAL" << endl;
        }
    }


    return 0;
}