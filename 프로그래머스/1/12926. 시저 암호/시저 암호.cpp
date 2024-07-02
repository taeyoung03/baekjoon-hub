#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if ('A' <= s[i] && s[i] <= 'Z' && s[i] + n > 'Z') {
            s[i] -= 26;
        }
        else if ('a' <= s[i] && s[i] <= 'z' && s[i] + n > 'z') {
            s[i] -= 26;
        }
        s[i] += n;
    }
    answer = s;
    
    return answer;
}