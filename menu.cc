#include <iostream>
#include <string>

/* A 'menu' program - user selects from list of options. Reprint on invalid
 * selection.
 */

using namespace std;

int main () {
    bool valid_option_selected = false;
    string selected_option;

    cout << "Please select from the following list of options:\n";

    while (!(valid_option_selected)) {
        for (int i = 0; i < 5; i++) {
            cout << "for option " << i << ", enter " << i << "\n";
        }

        cin >> selected_option;
        cout << "You selected option " << selected_option << "\n";

        for (int i = 0; i < 5; i++) {
            if (selected_option == to_string(i)) {
                valid_option_selected = true;
                break;
            }
        }

        if (valid_option_selected) {
            cout << "That is a valid selection.\n";
        }
        else {
            cout << "That is an invalid selection. Please try again.\n";
        }
    }
}
