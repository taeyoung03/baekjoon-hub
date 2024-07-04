#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long i;
    for (i = 1; i * i < n; i++);
    if (pow(i, 2) == n) {
        return pow(i + 1, 2);
    }
    else {
        return -1;
    }
}