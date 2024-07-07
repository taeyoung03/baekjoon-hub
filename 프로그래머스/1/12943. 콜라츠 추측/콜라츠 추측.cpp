#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    static int answer = 0;
    static long long n = static_cast<long long>(num);
    if (n == 1) {
        return answer;
    }
    else if (answer == 500) {
        return -1;
    }
    else if (n % 2 == 0) {
        n = n / 2;
        answer++;
    }
    else {
        n = n * 3 + 1;
        answer++;
    }
    return solution(n);
}