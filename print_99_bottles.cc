#include <iostream>
#include <string>

/* Print 99 bottles of beer */

using namespace std;

int main() {
    string lyrics;
    for (int i = 99; i > 0 ; i--) {
        lyrics += to_string(i) + " bottles of beer on the wall,\n";
        lyrics += to_string(i) + " bottles of beer.\n";
        lyrics += "You take one down, pass it around,\n";
        lyrics += to_string((i - 1)) + " bottles of beer on the wall!\n\n";
    }

    cout << lyrics;
}
