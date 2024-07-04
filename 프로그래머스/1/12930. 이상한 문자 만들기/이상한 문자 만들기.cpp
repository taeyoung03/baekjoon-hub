#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool is_even = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            is_even = true;
            continue;
        }
        else if (is_even) {
            is_even = false;
            s[i] = toupper(s[i]);
        }
        else if (!is_even) {
            is_even = true;
            s[i] = tolower(s[i]);
        }
    }
    answer = s;
    
    return answer;
}