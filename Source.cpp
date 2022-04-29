#include <iostream>
#include <string>
#include <regex>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Register.txt");
    string email;
    cout << "Enter The Email: ";
    getline(std::cin, email);
    cout << "Enter The Password : ";
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    string s;
    getline(cin, s);
    cout << endl;
    string word = "@oi.eg";
    regex w( word , regex_constants::icase);
    if (regex_search(email, w) && islower(s[s.size()]) + isupper(s[s.size() - 1])) {
        cout << "valid... :)" << "\n";
        file << email << endl << s << endl;
    }
    else {
        cout << "invalid... :(";
    }
    file.close();
    return 0;
}