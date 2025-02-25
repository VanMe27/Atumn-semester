#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, m, a[10][10];
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Произведение элементов побочной диагонали = ";
	cout << a[0][4] * a[1][3] * a[2][2] * a[3][1] * a[4][0];
	}
