#include <iostream>
using namespace std;
int main()
{
	double a, b, k[10]; /* от к0 до к9 */
	int n;
	cout << "vvedite kolichestvo elementov: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "element= ";
		cin >> k[i];
		a = k[1];
		b = k[2];
	}
	for (int i = 1; i <= n; i++) {
		if (k[i] > 0) k[i] -=a;
		else k[i] -= b;
		cout << k[i] << " ";
	}
	return (0);

}
