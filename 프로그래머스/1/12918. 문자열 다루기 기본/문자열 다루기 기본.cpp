#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.length() != 4 && s.length() != 6){
        return false;
    }
    for(int i = 0; i < s.length(); i++){
        if(('a' <= s[i] && s[i] <= 'z' ) || ('A' <= s[i] && s[i] <= 'Z')){
            return false;
        }
    }
    
    return true;
}