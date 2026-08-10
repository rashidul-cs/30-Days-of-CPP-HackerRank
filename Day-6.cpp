
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin >> T; 

    while (T--) {
        string S;
        cin >> S; 

        for (int i = 0; i < S.length(); i += 2) {
            cout << S[i];
        }

        cout << " ";

        for (int i = 1; i < S.length(); i += 2) {
            cout << S[i];
        }
        cout << endl;
    }
    return 0;
}
