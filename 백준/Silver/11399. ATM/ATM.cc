#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i] * (n - i);
    }

    cout << sum;
    return 0;
}