
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:

int age;
Person(int initialAge){
    if (initialAge >= 0){
        age = initialAge;
    } else if (initialAge < 0){
        age = 0;
        cout << "Age is not valid, setting age to 0." << endl;
    }
}

void yearPasses(){
    age += 1;
}

void amIOld(){
    if (age < 13){
        cout << "You are young." << endl;
    } else if (age >= 13 && age < 18){
        cout << "You are a teenager." << endl;
    } else {
        cout << "You are old." << endl;
    }
}
};
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    int age;

    for (int i = 1; i<=n; i++){
        cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 1; j <= 3; j++){
            p.yearPasses();
        }

        p.amIOld();
        cout << endl;
    }
    return 0;
}
