
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int tinhtong(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	
	cout << "S la" << tinhtong(n);
	system("pause");
	return 0;
}
int tinhtong(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;

	}
	return s;
}