#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> completion_map;
    
    for (int i = 0; i < completion.size(); i++) {
        string name = completion[i];
        if (completion_map.find(name) != completion_map.end()) {
            completion_map[name]++;
        }
        else {
            completion_map.insert({name, 1});
        }
    }
    
    for (int i = 0; i < participant.size(); i++) {
        string name = participant[i];
        if (completion_map.find(name) == completion_map.end()) {
            return name;
        }
        else if (--completion_map[name] < 0) {
            return name;
        }
    }
}