#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd;
    for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }
    
    int lcm;
    for (int i = min(n, m); ; i++) {
        if (i % n == 0 && i % m == 0) {
            lcm = i;
            break;
        }
    }
    
    answer = {gcd, lcm};
    return answer;
}