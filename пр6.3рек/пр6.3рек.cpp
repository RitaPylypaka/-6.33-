#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
template <typename T>
T Max(T a[], T size, T i, T max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout  << setw(4) << a[i] << " ";
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 8;
	int a[n];
	int Low = -19;
	int High = 40;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "max = " << Max(a, n, 1, a[0]) << endl;
	return 0;
}