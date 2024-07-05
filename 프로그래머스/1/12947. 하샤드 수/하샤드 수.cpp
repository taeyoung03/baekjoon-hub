#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num = x;
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    if (x % sum == 0) {
        return true;
    }
    else {
        return false;
    }
}