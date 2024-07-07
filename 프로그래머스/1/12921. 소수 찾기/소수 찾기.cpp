#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> is_prime(n + 1, true);
    
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            answer++;
            for (int j = 1; i * j <= n; j++) {
                is_prime[i * j] = false;
            }
        }
    }
    
    return answer;
}