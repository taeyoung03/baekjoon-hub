#include <string>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> scores;
    string tmp_score = "";
    int prev_score = 0;
    int cur_score = 0;
    
    for (int i = 0; i < dartResult.length(); i++) {
        if (isdigit(dartResult[i])) {
            if (cur_score != 0) {
                scores.push_back(cur_score);
                prev_score = cur_score;
                cur_score = 0;
            }
            tmp_score += dartResult[i];
            continue;
        }
        if (tmp_score.length() > 0) {
            cur_score = stoi(tmp_score);
            tmp_score = "";
        }
        switch(dartResult[i]) {
            case 'S':
                break;
            case 'D':
                cur_score = pow(cur_score, 2);
                break;
            case 'T':
                cur_score = pow(cur_score, 3);
                break;
            case '*':
                if (!scores.empty()) {
                    scores.pop_back();
                }
                scores.push_back(prev_score * 2);
                cur_score = cur_score * 2;
                break;
            case '#':
                cur_score = -cur_score;
                break;
        }
    }
    scores.push_back(cur_score);
    
    for (int i = 0; i < scores.size(); i++) {
        answer += scores[i];
    }
    
    return answer;
}