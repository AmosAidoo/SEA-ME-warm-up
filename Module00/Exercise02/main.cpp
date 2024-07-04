#include <cstring>
#include <iostream>

using namespace std;

inline char getCorrectCase(char c, string command) {
    if (command == "up") return toupper(c);
    else return tolower(c);
}

int main(int argc, char **argv)
{
    if (argc <= 2) {
        cerr << "Too few arguments" << endl;
        exit(1);
    }
    string command(argv[1]);
    if (command != "up" && command != "down") {
        cerr << "Expected up or down, got " << argv[1] << endl;
        exit(1);
    }
    for (int i = 2; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++) {
            cout << getCorrectCase(argv[i][j], command);
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}
