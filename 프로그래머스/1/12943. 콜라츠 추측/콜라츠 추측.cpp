#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = static_cast<long long>(num);
    for (answer; answer < 500; answer++) {
        if (n == 1) {
            return answer;
        }
        else if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = n * 3 + 1;
        }
    }
    return -1;
}