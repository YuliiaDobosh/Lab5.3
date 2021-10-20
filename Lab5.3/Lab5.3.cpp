#include <iostream>
#include <cmath>
using namespace std;
double k(const double x);
int main ()
{
	double zp, zk, f;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	double zg = (zk - zp) / n;
	double z = zp;
	while (z <= zk)
	{
		f = k(z*z+1) -k(z*z-1)+2*k(z);
		cout << z << " " << f << endl;
		z += zg;
	}
	return 0;
}
double k(const double x)
{
	if (abs(x) >= 1)
		return (exp(x) +sin( x )) / (cos (x) *cos(x) + 1);
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = x /j;
			a *= R;
			S += a;
		} while (j < 5);

		return 1 / exp(x) * S;
	}
}
