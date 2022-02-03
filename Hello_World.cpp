#include <iostream>
using namespace std;

int main(){
    int num = 5;
    string test = "test";

    cout << "Hello World" << endl;
    cout << num << endl;
    cout << "My favourite number: " << num << endl;
    cout << "Favourite number * 2 = " << num * 2 << endl;
    num++;
    cout << "num++ check -> expected: 6, actual: " << num << endl;
    num+=1;
    cout << "num+=1 check -> expected: 7, actual: " << num << endl;
    cout << "String test: " + test << endl;

    return 0;
}