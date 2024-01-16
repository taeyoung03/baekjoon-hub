#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string object, grade;
	double credit, creditSum = 0, avg = 0;
	for (int i = 0; i < 20; i++) {
		cin >> object >> credit >> grade;
		if (grade.compare("P")) creditSum += credit;
		if (!grade.compare("A+")) avg += 4.5 * credit;
		else if (!grade.compare("A0")) avg += 4.0 * credit;
		else if (!grade.compare("B+")) avg += 3.5 * credit;
		else if (!grade.compare("B0")) avg += 3.0 * credit;
		else if (!grade.compare("C+")) avg += 2.5 * credit;
		else if (!grade.compare("C0")) avg += 2.0 * credit;
		else if (!grade.compare("D+")) avg += 1.5 * credit;
		else if (!grade.compare("D0")) avg += 1.0 * credit;
	}
	cout << avg/creditSum << endl;
	return 0;
}