#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int operand1[MAX_SIZE][MAX_SIZE], operand2[MAX_SIZE][MAX_SIZE];

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> operand1[i][j];
        }
    }

    int k;
    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> operand2[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            int tmp = 0;
            for (int l = 0; l < m; l++){
                tmp += operand1[i][l] * operand2[l][j];
            }
            cout << tmp << ' ';
        }
        cout << '\n';
    }
    return 0;
}