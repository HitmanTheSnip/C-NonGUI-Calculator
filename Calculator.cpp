#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    string op1 = "+";
    string op2 = "-";
    string op3 = "*";
    string op4 = "/";

    string op;
    cout << "Select any of the math opertators: ";
    cin >> op;

    if (op == op1) {
        cout << "Sum of a and b is " << a + b << endl;
    }
    else if (op == op2) {
        cout << "Difference between a and b is " << a - b << endl;
    }
    else if (op == op3) {
        cout << "Multiplication of a and b is " << a * b << endl;
    }
    else if (op == op4) {
        cout << "Division of a and b is " << a / b << endl;
    }
    else {
        cout << "Wrong Input" << endl;
    }
}