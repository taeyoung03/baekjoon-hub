#include <iostream>
using namespace std;

int main(void) {
	int arr[100], n, v, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	cin >> v;
	for (int i = 0; i < n; i++)
		if (arr[i] == v) num++;
	cout << num << endl;

}