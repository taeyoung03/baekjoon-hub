#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool is_even = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (is_even) {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }
        is_even = !is_even;
        if (s[i] == ' ') {
            is_even = true;
        }
    }
    
    return s;
}