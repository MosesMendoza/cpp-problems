#include <iostream>
#include <string>

// "calculator" accepts an operator of +-/* and two operands, prints result
using namespace std;

int main() {
    char operator_in;
    double operand_0, operand_1, result;

    cout << "Enter the first operand:\n";
    cin >> operand_0;
    cout << "Enter the operator, one of \"+\", \"-\", \"*\", \"/\" :\n";
    cin >> operator_in;
    cout << "Enter the second operand:\n";
    cin >> operand_1;

    switch ( operator_in ) {
        case '+':
            result = operand_0 + operand_1;
            break;
        case '-':
            result = operand_0 - operand_1;
            break;
        case '*':
            result = operand_0 * operand_1;
            break;
        case '/':
            if (operand_1 == 0) {
                cout << "Cannot divide by 0\n";
                return 1;
            }
            result = operand_0 / operand_1;
            break;
        default:
            cout << "Unknown operator " << operator_in;
            return 1;
            break;
    }
    cout << "result: " << result << "\n";

}

