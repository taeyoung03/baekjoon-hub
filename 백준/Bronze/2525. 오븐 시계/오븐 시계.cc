#include <iostream>
using namespace std;

int main(void) {
	int H, M, cookingTime, time = 0;
	cin >> H >> M;
	cin >> cookingTime;
	M += cookingTime;
	while (M >= 60) {
		M -= 60;
		H++;
	}
	if (H > 23) H -= 24;
	cout << H << ' ' << M << endl;
}