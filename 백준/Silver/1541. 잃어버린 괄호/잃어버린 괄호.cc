#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int tmp = 0, res = 0;
    bool is_minus = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '+' || str[i] == '-') {
            if (is_minus) {
                res -= tmp;
                tmp = 0;
            } else {
                res += tmp;
                tmp = 0;
                if (str[i] == '-') {
                    is_minus = true;
                }
            }
        } else {
            tmp *= 10;
            tmp += str[i] - '0';
            if (i == str.length() - 1) {
                if (is_minus) {
                    res -= tmp;
                } else {
                    res += tmp;
                }
            }
        }
    }

    cout << res;
    return 0;
}