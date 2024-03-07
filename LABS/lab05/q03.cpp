#include <iostream>
#include <string>
#include <cctype> // For isalpha() function; used to check whether the character is an alphabet or anything else
using namespace std;

class ValidateString {
    string s;

public:
    ValidateString(string s) {
        this->s = s;
    }

    
    bool isValid() const {
        for (char ch : s) {
            if (!isalpha(ch)) {
                return false;
            }
        }
        return true;
    }
};

int main() {

    cout << "Programmer : Riya Bhart\n ID : 23K-0063\n"
         << endl;
    
    ValidateString str1("HelloWorld");
    ValidateString str2("11234Name");
    ValidateString str3("*()%^@#$");

   
    cout << "String 1 is " << (str1.isValid() ? "valid" : "invalid") << endl;
    cout << "String 2 is " << (str2.isValid() ? "valid" : "invalid") << endl;
    cout << "String 3 is " << (str3.isValid() ? "valid" : "invalid") << endl;

    return 0;
}
