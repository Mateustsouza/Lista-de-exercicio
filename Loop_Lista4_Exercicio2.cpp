#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	int i; // Quantidade de asteriscos
	int c; // número da linha
	int e; // Quantidade de espaços

	// A

	for (c = 1; c < 11; c++) // Laço de impressão de cada linha c.
	{

		for (i = 0; i < c; i++) // Laço que determina o número de asteriscos da linha c.
		{
			cout << " *";
		}
		cout << "\n";
	}
	cout << "\n";

	// B

	for (c = 1; c < 11; c++) // Laço de impressão de cada linha c.
	{

		for (i = 0; i < (11 - c); i++) // Laço que determina o número de asteriscos da linha c.
		{
			cout << " *";
		}
		cout << "\n";
	}
	cout << "\n";

	// C

	for (c = 1; c < 11; c++) // Laço de impressão de cada linha c.
	{
		for (e = 1; e <= c - 1; e++) // Laço que determina o número de espaços da linha c.
		{
			cout << ' ' << ' ';
		}
		for (i = 0; i < (11 - c); i++) // Laço que determina o número de asteriscos da linha c.
		{
			cout << " *";
		}
		cout << "\n";
	}
	cout << "\n";

	// D

	for (c = 1; c < 11; c++) // Laço de impressão de cada linha c.
	{
		for (e = 1; e <= 10 - c; e++) // Laço que determina o número de espaços da linha c.
		{
			cout << ' ' << ' ';
		}
		for (i = 0; i < c; i++) // Laço que determina o número de asteriscos da linha c.
		{
			cout << " *";
		}
		cout << "\n";
	}
	cout << "\n";

	return 0;
}
