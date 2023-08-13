#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double r, area;
	cin >> r;

	area = 3.14159 * r * r;
	cout << "A=" << setprecision(4) << fixed << area << endl;

	return 0;
}