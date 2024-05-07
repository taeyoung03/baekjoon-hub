#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> load(n - 1), gas(n);
    for (int i = 0; i < load.size(); i++) {
        cin >> load[i];
    }
    for (int i = 0; i < gas.size(); i++) {
        cin >> gas[i];
    }

    int gas_min = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < load.size(); i++) {
        if (gas[i] < gas_min) {
            gas_min = gas[i];
        }
        sum += gas_min * load[i];
    }

    cout << sum;
    return 0;
}