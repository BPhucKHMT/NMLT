
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int ucln(int, int);
int main()
{
	int a;
	cout << "Nhap a ";
	cin >> a;
	int b;
	cout << "Nhap b ";
	cin >> b;
	
	cout << "ucln la " << ucln(a,b);
	system("pause");
	return 0;
}
int ucln(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else n = n - m;
	}
	int ucln = m + n;
	return ucln;
}