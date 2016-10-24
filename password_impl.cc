#include <iostream>
#include <string>

/* pretend "password" system. accept number for password input. two passwords
 * are valid.
*/

using namespace std;
int main() {

    int valid_pass_0 = 3456;
    int valid_pass_1 = 5678;
    int user_input;
    cout << "Enter a password to proceed:\n";

    cin >> user_input;

    if (user_input != valid_pass_0 && user_input != valid_pass_1) {
        cout << "ERROR: supplied password invalid\n";
    }
    else {
        cout << "Password accepted. Proceeding with application:\n";
        cout << "application is... top secret goodness\n";
    }
}


