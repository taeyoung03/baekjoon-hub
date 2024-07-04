#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    int devisor = 10;
    while (n) {
        answer += n % devisor;
        n /= devisor;
    }
    
    return answer;
}