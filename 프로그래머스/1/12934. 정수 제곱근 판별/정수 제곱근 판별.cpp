#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    for (long long i = 0; i <= sqrt(n); i++) {
        if (pow(i, 2) == n) {
            return pow(i + 1, 2);
        }
    }
    return -1;
}