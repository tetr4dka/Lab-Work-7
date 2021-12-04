#include "/Git/LB7/inc/Functions.hpp"
#include <iostream>

namespace mt
{


	bool isPrime(int x)
	{
		if (x < 2)
			return false;
		for (int d = 2; d <= sqrt(x); d++)
			if (x % d == 0)
				return false;
		return true;
	}

	void Swap(int& a, int& b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}

	/*int Norm(int n, int j, int a[N][N])
	{
		int sum = 0;
		for (int i = 0;i < n;i++)
			sum += a[i][j] * a[i][j];
		sum = sqrt(sum);
	}*/
}