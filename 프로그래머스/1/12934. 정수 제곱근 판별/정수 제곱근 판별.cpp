#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    for (answer; pow(answer, 2) < n; answer++);
    if (pow(answer, 2) == n) {
        return pow(answer + 1, 2);
    }
    return -1;
}