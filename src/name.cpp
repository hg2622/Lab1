
# include <iostream>
#include <string>
using namespace std;
string getName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    return name;
    }