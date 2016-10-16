#include <iostream>
#include <string>

using namespace std;

int main(){

    string first_num, second_num;
    cout << "first num:\n";
    getline (cin, first_num);
    cout << "second num:\n";
    getline (cin, second_num);

    cout << "sum is: " << (stoi(first_num) + stoi(second_num)) << "\n";
}
