#include <iostream>
#define MAX_SIZE 5
#define MOD 1000
using namespace std;

int matrix[MAX_SIZE][MAX_SIZE], ans[MAX_SIZE][MAX_SIZE];

void SetMatrix(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}

void CopyMatrix(int src[MAX_SIZE][MAX_SIZE], int dst[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            dst[i][j] = src[i][j] % MOD;
        }
    }
}

void Multiply(int operand1[MAX_SIZE][MAX_SIZE], int operand2[MAX_SIZE][MAX_SIZE], int size) {
    int tmp[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tmp[i][j] = 0;
            for (int k = 0; k < size; k++) {
                tmp[i][j] += (operand1[i][k] * operand2[k][j] % MOD);
            }
        }
    }
    CopyMatrix(tmp, ans, size);
}

void Power(long long expo, int size) {
    if (expo == 1) {
        CopyMatrix(matrix, ans, size);
        return;
    }

    Power(expo / 2, size);
    if (expo % 2 == 0) {
        Multiply(ans, ans, size);
    } else {
        Multiply(ans, ans, size);
        Multiply(ans, matrix, size);
    }
}

void PrintAnswer(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long b;
    cin >> n >> b;
    SetMatrix(n);
    Power(b, n);
    PrintAnswer(n);
    return 0;
}