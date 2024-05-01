#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

pair<int, int> sum[2001][2001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char color;
            cin >> color;

            if (color == 'B') {
                if ((i + j) % 2 == 0) {
                    sum[i][j].first++;
                } else {
                    sum[i][j].second++;
                }
            } else {
                if ((i + j) % 2 == 0) {
                    sum[i][j].second++;
                } else {
                    sum[i][j].first++;
                }
            }

            sum[i][j].first += sum[i - 1][j].first + sum[i][j - 1].first - sum[i - 1][j - 1].first;
            sum[i][j].second += sum[i - 1][j].second + sum[i][j - 1].second - sum[i - 1][j - 1].second;
        }
    }

    int min_sum = INT_MAX;
    for (int i = k; i <= n; i++) {
        for (int j = k; j <= m; j++) {
            int tmp_first = sum[i][j].first - sum[i][j - k].first - sum[i - k][j].first + sum[i - k][j - k].first;
            int tmp_second = sum[i][j].second - sum[i][j - k].second - sum[i - k][j].second + sum[i - k][j - k].second;
            if (min(tmp_first, tmp_second) < min_sum) {
                min_sum = min(tmp_first, tmp_second);
            }
        }
    }

    cout << min_sum;
    return 0;
}