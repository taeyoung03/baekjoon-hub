#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] % 2 == 1 || arr2[i] % 2 == 1) {
                tmp.append("#");
            }
            else {
                tmp.append(" ");
            }
            arr1[i] /= 2;
            arr2[i] /= 2;
        }
        reverse(tmp.begin(), tmp.end());
        answer.push_back(tmp);
        tmp.clear();
    }
    return answer;
}