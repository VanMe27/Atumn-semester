#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a; 
    cout << "Введите число: "; 
    cin >> a;
    if (a > 0)
    {
        cout << "Число " << a << " положительное" << endl;
    }
    else if (a < 0)
    {
        cout << "Число " << a << " отрицательное" << endl;     
    }
    else
    {
        cout << "Ноль" << endl;
    }
}
