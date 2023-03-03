#include <iostream>
#include<cstring>

using namespace std;

int main() {
    char str[12];
    char substr[4];
    while (cin >> str >> substr) {
        int index = 0;
        int p = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (p < str[i]) {
                p = str[i];
                index = i;

            }

        }

        for (int i = 0; i < index + 1; i++) {
            cout << str[i];

        }
        for (int i = 0; i < 3; ++i) {
            cout << substr[i];
        }
        for (int i = index + 1; i < strlen(str); ++i) {
            cout << str[i];
        }
        cout << "\n";
    }

}
