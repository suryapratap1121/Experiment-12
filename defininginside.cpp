#include<iostream>
using namespace std;

class student {
    int rollno;
    char name[50];
    double fee;

public:
    student() {
        cout << "Enter the rollno: ";
        cin >> rollno;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the Fee: ";
        cin >> fee;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Fee: " << fee << endl;
    }
};

int main() {
    student s1;
    s1.display();
    return 0;
}
