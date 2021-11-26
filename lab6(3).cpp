#include <iostream>
using namespace std;
int main()
{
	int a[30], x, n = 0;
	for (int i = 0; i < 30; i++)
	{ 
		cout << i+1 << "element= ";
		cin >> a[i];
	}
	n=a[0];
	for (i = 0; i < 30; i++)
	 if (a[i] < n) {
			n = a[i];
			x = i;
		}
	cout << "nomer starshego= " << x+1;

}
