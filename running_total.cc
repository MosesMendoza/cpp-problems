#include <iostream>


// A program that computes a running sum from the user and terminates if they enter 0

using namespace std;

int main() {
    int input;
    int sum = 0;

    while (true){
        cout << "Please enter a number\n";
        cin >> input;
        if (input == 0) {
            break;
        }
        sum += input;
        cout << "Running total is " << sum << "\n";
    }
}