#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> table(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> table[i][j];
        }
    }

    vector<vector<int>> table_sum(n + 1, vector<int>(n + 1));
    table_sum[1][1] = table[1][1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            table_sum[i][j] = table_sum[i - 1][j] + table_sum[i][j - 1] - table_sum[i - 1][j - 1] + table[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = table_sum[x2][y2] - table_sum[x2][y1 - 1] - table_sum[x1 - 1][y2] + table_sum[x1 - 1][y1 - 1];
        cout << ans << '\n';
    }
    return 0;
}