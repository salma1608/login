#include <iostream>
#include <string>
#include <regex>
#include <windows.h>
using namespace std;
int main()
{
    string email;
    cout << "Enter The Email: ";
    getline(std::cin, email);
    cout << "Enter the password : ";
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    string s;
    getline(cin, s);
    cout << endl;
    string word = "@oi.eg";
    regex fox_re( word, regex_constants::icase);
    if (regex_search(email, fox_re)&& islower(s[s.size()]) + isupper(s[s.size() - 1]))
        cout << "valid" << "\n";
    else
        cout << "invalid... :(";
}