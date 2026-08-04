
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";  
     
    int a;
    cin >> a;
    
    double b;
    cin >> b;
    
    string c;
    cin.ignore();
    getline(cin, c);
    
    cout << i+a << endl;
    cout << fixed << setprecision(1);
    cout << d+b << endl;
    cout << s+c << endl;
    return 0;
}
