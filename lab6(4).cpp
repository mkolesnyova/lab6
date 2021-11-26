#include <iostream>
using namespace std;
int main()
{
	int a[15], i, b, m, k, n;
	for (i = 0; i < 15; i++)
		cin >> a[i] ;
	cout << endl;
	m = a[0];
	b = a[0];
	k = 0;
	n = 0;
	for (i = 0; i < 15; i++)
	{
		if (a[i] < m) { m = a[i]; n = i; }
		if (a[i] > b) { b = a[i]; k = i; }
	}
	b = k;
	if (k < n) { k = n; n = b; }
	b = k;
	for (i = 0; i != n; i++)
		cout << a[i] << " ";
	for (k; k != n - 1; k--)	
		cout << a[k] << " ";
	b += 1;
	for (b ; b < 15; b++)
		cout << a[b] << " ";
}