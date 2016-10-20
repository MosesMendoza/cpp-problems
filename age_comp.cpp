#include <iostream>
#include <string>

// Compare two user-supplied values for "age"
using namespace std;

int main(){

    int first_age, second_age;
    cout << "Enter the first person's age in years:\n";
    cin >> first_age;

    cout << "Enter the second person's age in years:\n";
    cin >> second_age;

    if (first_age > 100 or second_age > 100) {
        cout << "Either person is over 100! congrats but i'm not comparing.";
    }
    else {
        if (first_age > second_age) {
            cout << "First person, age " << first_age << " is older\n";
        }
        else if (first_age == second_age) {
            cout << "First person, age " << first_age << " is the same age as second person\n";
        }
        else {
            cout << "Second person, age " << second_age << " is older\n";
        }
    }
}

