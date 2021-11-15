#include <iostream>
using namespace std;
int main()
{
	int a[31], x, n = 0;
	for (int i = 1; i <= 30; i++)
	{ 
		cout << i << "element= ";
		cin >> a[i];
		if (a[i] < n) {
			n = a[i];
			x = i;
		}
		cout << "nomer starshego= " << x;

}