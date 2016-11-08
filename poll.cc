#include <iostream>
#include <string>

using namespace std;

/* Write a program that:
* stores a poll by accepting the question and three possible answers selected by
entering '1', '2', '3'
    - 'executes' the poll by offering the question and storing selections
    - exits the poll when '0' is offered
    - Prints a bar graph of results
*/

string polling_question, selection_1, selection_2, selection_3, selection;
int tally_1, tally_2, tally_3 = 0;
bool polling_in_progress = true;

int main()
{
    cout << "Please enter a polling question:\n";
    getline(cin, polling_question);

    cout << "Please enter the first possible selection:\n";
    cin >> selection_1;

    cout << "Please enter the second possible selection:\n";
    cin >> selection_2;

    cout << "Please enter the final possible selection:\n";
    cin >> selection_3;

    cout << "Poll created. Beginning poll. Enter '0' to exit and tally results\n\n";

    while (polling_in_progress)
    {
        cout << "Question: " << polling_question << "\n";
        cout << "(1)" << selection_1 << "\n";
        cout << "(2)" << selection_2 << "\n";
        cout << "(3)" << selection_3 << "\n\n";
        cout << "What is your selection? (1, 2, 3, or 0 to exit)\n\n";
        cin >> selection;

        switch (stoi(selection)) {
            case 1 :
                tally_1++;
                break;    
            case 2 :
                tally_2++;
                break;
            case 3 :
                tally_3++;
                break;
            case 0 :
                polling_in_progress = false;
                break;
            default :
                cout << "Invalid selection: " << selection << "\n";
                cout << "Please try again\n";
                break;
        }
    }

    cout << "Results:\n";
    cout << selection_1 << ": " << tally_1 << "\n";
    cout << selection_2 << ": " << tally_2 << "\n";
    cout << selection_3 << ": " << tally_3 << "\n";
}
