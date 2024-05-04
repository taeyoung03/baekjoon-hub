#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] <= k) {
            cnt += k / v[i];
            k %= v[i];
        }
    }

    cout << cnt;
    return 0;
}