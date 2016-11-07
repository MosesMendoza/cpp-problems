#include <iostream>

/* A program that only lets the user enter a limited number of incorrect
password tries before proceeding to fail */

using namespace std;

int main()
{

    const int allowed_tries = 3;
    int tries = 0;
    bool success = false;
    string password = "abc123";
    string input;
    while (tries <= allowed_tries)
    {
        cout << "Please enter a password:\n";
        cin >> input;
        if (password != input)
        {
            cout << "Incorrect password (attempt " << tries << "). Please try again\n";
            tries++;
        }
        else
        {
            success = true; 
            break;
        }
    }
    if (success)
    {
        cout << "Congratulations you win!\n";
    }
    else
    {
        cout << "Failed to log in - too many attempts.\n";
    }
}
