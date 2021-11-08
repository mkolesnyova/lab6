#include <iostream>
using namespace std;
int main()
{
	double k[10]; /* от к0 до к9 */
	int n;
	cout << "vvedite kolichestvo elementov: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "element= ";
		cin >> k[i];
	}
	for (int i = 1; i <= n; i++) {
		if (k[i] > 0) k[i] -= k[1]; 
		else k[i] -= k[2];
		cout << k[i] << " ";
	}
	return (0);

}