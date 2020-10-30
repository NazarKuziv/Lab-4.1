// Lab_04_1.cpp
 // < Кузів Назар >
 // Лабораторна робота № 4.1
 // Розгалуження, задане плоскою фігурою.
 // Варіант 6

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, N;
	double S;

	cout << "N = "; cin >> N;

	S = 1;
	k = N;	
	while (k <= 19)
	{
		S *= (1.0* k - N) / (1.0* k + N) + 1;
		k++  ;
	}
	cout << S << endl;

	S = 1;
	k = N;
	do {
		S *= (1.0 * k - N) / (1.0 * k + N) + 1;
		k++;
	} while (k <= 19);
	cout << S << endl;

	S = 1;
	for (k = N; k <= 19; k++)
	{
		S *= (1.0 * k - N) / (1.0 * k + N) + 1;
	}
	cout << S << endl;

	S = 1;
	for ( k = 19; k >= N; k--)
	{
		S *= (1.0 * k - N) / (1.0 * k + N) + 1;
	}
	cout << S << endl;
	
	return 0;
}