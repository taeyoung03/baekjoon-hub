#include <iostream>
using namespace std;

int main(void) {
	bool arr[100][100] = { 0, };
	int num, x, y, area = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++)
			for (int k = y; k < y + 10; k++)
					if (arr[j][k] == 0) {
						arr[j][k] = true;
						area++;
					}
	}
	cout << area << endl;
	return 0;
}