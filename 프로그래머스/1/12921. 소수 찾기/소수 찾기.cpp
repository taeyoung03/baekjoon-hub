#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> IsPrime(n + 1, true);
    
    for (int i = 2; i <= n; i++) {
        if (IsPrime[i]) {
            answer++;
            for (int j = 1; i * j <= n; j++) {
                IsPrime[i * j] = false;
            }
        }
    }
    
    return answer;
}