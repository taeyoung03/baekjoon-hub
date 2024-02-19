#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[1001][3] = { 0, };

	int num; 
	cin >> num;
	for (int i = 1; i <= num; i++) {
		int red, green, blue;
		cin >> red >> green >> blue;
		arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + red;
		arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + green;
		arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + blue;
	}
	cout << min(arr[num][0], min(arr[num][1], arr[num][2]));
	return 0;
}