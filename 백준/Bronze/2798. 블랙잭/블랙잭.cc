#include <iostream>
using namespace std;

int main(void) {
	int n, m, max = 0;
	cin >> n >> m;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if (arr[i] + arr[j] + arr[k] > max && arr[i] + arr[j] + arr[k] <= m) 
					max = arr[i] + arr[j] + arr[k];
	cout << max << endl;
	delete[] arr;
	return 0;
}