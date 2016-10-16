#include <iostream>
#include <string>

/* Divide two numbers read in from user with high precision. Handle decimal input */

using namespace std;

int main(){
    string first, second;

    cout << "Enter first number:\n";
    getline(cin, first);

    cout << "Enter second number:\n";
    getline(cin, second);

    // convert to double precision floating point nums
    double first_num = stod(first);
    double second_num = stod(second);

    if (second_num == 0.0) {
        cout << "Cannot divide by 0\n";
    }
    else {
        cout << (first_num / second_num) << "\n";
    }

}
