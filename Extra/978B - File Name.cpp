#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int removals = 0;
    int current_x_count = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'x') {
            current_x_count++;
            if (current_x_count >= 3) {
                removals++;
            }
        } else {
            current_x_count = 0;
        }
    }

    cout << removals << "\n";

    return 0;
}
