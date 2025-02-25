#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int side, square;
    cout << "Введите сторону квадрата: ";
    cin >> side;
    square = side * side;
    cout << "Площадь квадрата равна = " << square << endl;
}

