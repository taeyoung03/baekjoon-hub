#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    long long sum = 0;
    cin >> n >> m;

    vector<long long> mod(m);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
        mod[sum % m]++;
    }

    long long cnt = 0;
    for (int i = 0; i < m; i++) {
        cnt += mod[i] * (mod[i] - 1) / 2;
    }
    cnt += mod[0];

    cout << cnt;
    return 0;
}