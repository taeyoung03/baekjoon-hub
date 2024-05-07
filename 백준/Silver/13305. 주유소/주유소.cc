#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> load(n - 1), gas(n);
    long long gas_min = LLONG_MAX;
    for (int i = 0; i < load.size(); i++) {
        cin >> load[i];
    }
    for (int i = 0; i < gas.size(); i++) {
        cin >> gas[i];
        if (gas[i] < gas_min && i != gas.size() - 1) {
            gas_min = gas[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < load.size(); i++) {
        if (gas[i] == gas_min) {
            for (int j = i; j < load.size(); j++) {
                sum += gas[i] * load[j];
            }
            break;
        } else {
            sum += gas[i] * load[i];
        }
    }

    cout << sum;
    return 0;
}