#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long tmp = 0;
    for (int i = 0; i < n; i++) {
        answer.push_back(tmp + x);
        tmp = answer.back();
    }
    return answer;
}