#include <iostream>
#include <string>

/* v2 of pretend "password" system. accept number for password input. two passwords
 * are valid.
 * Extension is that this knows of three username/password combinations
 * Note we haven't covered maps, looping, or really any data structures yet in
 * the book so the intention is for this to be really rudimentary. Really quite
 * terrible.
 */

using namespace std;
int main() {

    int barneys_pass = 3456;
    int freds_pass = 5678;
    int bobs_pass = 4343;
    int password_input;
    string username;

    cout << "Enter your username:\n";
    cin >> username;

    cout << "Enter a password to proceed:\n";
    cin >> password_input;

    // We know about fred, bob, and barney
    // sweet jeebus
    if ((username == "barney" and password_input == barneys_pass)
        or (username == "fred" and password_input == freds_pass)
        or (username == "bob" and password_input == bobs_pass)) {
            cout << "Access granted!\n";
    }
    else {
        cout << "Incorrect username/password\n";
        return 1;
    }
    cout << "Entering the matrix now...\n";
}


