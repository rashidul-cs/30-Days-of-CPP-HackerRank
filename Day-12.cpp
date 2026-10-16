
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
};
class Student: public Person {
    public:
    Student(string fname, string lname, int id, int score[], int n){
        cout << "Name: " << lname << ", " << fname << endl;
        cout << "ID: " << id << endl;
        int grade = 0;
        for (int i = 0; i<n; i++){
            grade += score[i];
        }
        grade /= n;
        if (grade >= 90){
            cout << "Grade: O";
        } else if (grade >= 80){
            cout << "Grade: E";
        } else if (grade >= 70){
            cout << "Grade: A";
        } else if (grade >= 55){
            cout << "Grade: P";
        } else if (grade >= 40){
            cout << "Grade: D";
        } else if (grade < 40){
            cout << "Grade: T";
        }
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string fname, lname;
    cin >> fname >> lname;
    int id;
    cin >> id;
    int n;
    cin >> n;
    int score[n];
    for (int i = 0; i<n; i++){
        cin >> score[i];
    }
    Student obj(fname, lname, id, score, n);   
    return 0;
}
