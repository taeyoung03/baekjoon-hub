#include <iostream>
using namespace std;

int main(void) {
	int tri[3], maxIdx, max = 0, sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> tri[i];
		sum += tri[i];
		if (tri[i] > max) {
			max = tri[i];
			maxIdx = i;
		}
	}
	for (tri[maxIdx]; 2 * tri[maxIdx] >= sum; tri[maxIdx]--, sum--);
	cout << sum << endl;
	return 0;
}