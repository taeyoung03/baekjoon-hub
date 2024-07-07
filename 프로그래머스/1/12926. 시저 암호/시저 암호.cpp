#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if((s[i] <= 'Z' && s[i] + n > 'Z') || (s[i] >= 'a' && s[i] + n > 'z')) {
            s[i] -= 26;
        }
        s[i] += n;
    }
    return s;
}