//logical operator and if else loop

#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a letter." <<endl;}
        cout << "The character is a letter." <<endl;}
    else if(ch >= 'A' && ch <= 'Z') {
        cout << "The character is a capital letter." <<endl;}
    else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." <<endl;
    } else {
        cout << "The character is neither a letter nor a digit." <<endl;
    }
}
