#include <iostream>
using namespace std;

int main(void) {
	int num, cnt[10] = { 0, };
	cin >> num;
	while (num) {
		cnt[num % 10]++;
		num /= 10;
	}

	for (int i = 9; i >= 0; i--) 
		for (cnt[i]; cnt[i] > 0; cnt[i]--) 
			cout << i;
	return 0;
}