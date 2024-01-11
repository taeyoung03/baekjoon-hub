#include <iostream>
using namespace std;

int main(void) {
	int first, second, third, biggest;
	cin >> first >> second >> third;
	if (first == second && second == third) cout << 10000 + first * 1000 << endl;
	else {
		if (first == second) cout << 1000 + first * 100 << endl;
		else if (second == third) cout << 1000 + second * 100 << endl;
		else if (third == first) cout << 1000 + third * 100 << endl;
		else {
			biggest = first;
			if (second > biggest) biggest = second;
			if (third > biggest) biggest = third;
			cout << biggest * 100 << endl;
		}
	}
}