#include <iostream>

/*
Implement program: turn any number from -999,999 to 999,999 into English text
*/


int main(){
    std::cout << "hello world";

}

std::string get_input(){
    std::string input;
    std::cin >> input;
    return input;
}

/*
need to be able to:
- print 'negative' if prefixed with '-'
- always print 'thousand' if more than four digits
- x in xyy,yyy will always be 'x' hundred
- x in yxy,yyy will...
-- if 2, be twenty, 3 be thirty...
-- if 1, be one of ten through nineteen in combination with next least significant digit
- the same rules apply for yyy in xxx,yyy, just without being suffixed by 'thousand'
-

function outline:
- handle negative
-- some function to prefix string with "negative" and strip the '-' from the string if it exists.
- 

*/
