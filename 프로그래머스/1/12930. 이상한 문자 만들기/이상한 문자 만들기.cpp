#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool is_even = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            is_even = true;
        }
        else if (is_even) {
            is_even = false;
            if ('a' <= s[i] && s[i] <= 'z') {
                s[i] -= ('a' - 'A');
            }
        }
        else if (!is_even) {
            is_even = true;
            if ('A' <= s[i] && s[i] <= 'Z') {
                s[i] += ('a' - 'A');
            }
        }
    }
    answer = s;
    
    return answer;
}