#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int begin, end;
        cin >> begin >> end;
        v.push_back({end, begin});
    }
    sort(v.begin(), v.end());

    int current = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second >= current) {
            cnt++;
            current = v[i].first;
        }
    }

    cout << cnt;
    return 0;
}