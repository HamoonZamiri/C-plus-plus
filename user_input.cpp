//short file which shows how to use cin to get input from the keyboard
#include <iostream>

using namespace std;

int main(){
    string input;

    cout << "Enter a string: " << flush;
    cin >> input;
    cout << "Your input: " + input << endl;

    //cin also works for ints
    int int_input;
    cin >> int_input;
    cout << "Your int: " << int_input << endl;
    return 0;
}