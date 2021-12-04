#include <iostream>
#include <fstream>
#include "inc/Functions.hpp"

using namespace mt;

std::ifstream in("input.txt");
std::ofstream out("output.txt");
int a[N][N];


void Read(int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			in >> a[i][j];
}

void Write(int n, int m)
{
	for (int i = 0;i < n;i++)
	{
		out << std::endl;
		for (int j = 0;j < m;j++)
			out << a[i][j] << ' ';
	}
}


int main()
{
	int n, m;
	in >> n >> m;
	float M[N] = { 0 };
	Read(n, m);
	bool find = false;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		bool prime = false;
		for (int j = 0; j < m; j++)
		{
			sum = sum + a[i][j];
			if (isPrime(a[i][j]) == true)
				prime = true;
		}
		if ((prime == true) && (sum == 0))
		{
			find = true;
			break;
		}
	}

	if (find == true)
	{
		float sum = 0;
		for (int j = 0;j < m;j++)
		{
			sum = 0;
			for (int i = 0;i < n;i++)
				sum += a[i][j] * a[i][j];
			M[j] = sqrt(sum);
		}
		for (int i = 0; i < m - 1; i++)
			for (int j = i + 1;j < m;j++)
				if (M[i] < M[j])
					for (int s = 0;s < n;s++)
					{
						Swap (a[s][i], a[s][j]);
					}

	}
	
	Write(n, m);

}