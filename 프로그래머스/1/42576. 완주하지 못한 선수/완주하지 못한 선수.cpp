#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> completion_map;
    
    for (string name : completion) {
        if (completion_map.find(name) == completion_map.end()) {
            completion_map.insert({name, 1});
        }
        else {
            completion_map[name]++;
        }
    }
    
    for (string name : participant) {
        if (completion_map.find(name) == completion_map.end()) {
            return name;
        }
        else if (--completion_map[name] < 0) {
            return name;
        }
    }
}