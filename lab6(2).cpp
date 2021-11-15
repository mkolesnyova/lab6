#include <iostream>
using namespace std;
int main()
{
	int n, s=0, k = 0, betta, z=0, a[20];
	cout << "chislo betta= ";
	cin >> betta;
	cout << "kolichestvo elementov: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " element= ";
			cin >> a[i];
			if (a[i] < betta) z = i;
			if (a[i] > 0) k++;
			if (a[i] > 3) s += a[i];
	}
	if (z > 0) cout << "nomer= " << z << endl;
	else cout << "net chisel bolshe betta" << endl;
	cout << "kolichestvo= " << k << endl;
	cout << "summa= " << s << endl;
}
