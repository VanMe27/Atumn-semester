#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;



struct marsh {
    char start[100];
    char end[100];
    unsigned int nuber;
};

void inputMarsh(marsh& a) {
    cout << "Введите начальный пункт: ";
    cin >> a.start;
    cout << "Введите конечный пункт: ";
    cin >> a.end;
    cout << "Введите номер маршрута: ";
    cin >> a.nuber;
}

void sort(marsh* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j].nuber > a[j + 1].nuber)
                swap(a[j], a[j + 1]);
        }
    }
}

void outputMarsh(marsh& a) {
    cout << "Номер маршрута: " << a.nuber << endl;
    cout << "Начальный пункт: " << a.start << endl;
    cout << "Конечный пункт: " << a.end << endl;
    cout << endl << endl;
}

void searchInform(marsh* a, int n) {
    while (1) {
        char tmp[100];
        const char _exit[] = "-1\0";
        cout << "Для выхода из программы наберите -1" << endl << endl;
        cout << "Введите пункт, информация о котором вас интересует: ";
        cin >> tmp;
        bool _check = false;
        for (int i = 0; i < n; i++) {
            if (!strcmp(a[i].end, tmp) || !strcmp(a[i].start, tmp)) {
                outputMarsh(a[i]);
                _check = true;
            }
        }
        if (!strcmp(tmp, _exit))
            exit(1);
        if (!_check) {
            cout << "Ничего не найдено" << endl;
        }
    }
}

int main(int argc, char* argv[])
{
    std::system("chcp 1251");
    static const char n = 8; //кол-во элементов массива

    marsh marsh_array[n];

    for (int i = 0; i < n; i++)
        inputMarsh(marsh_array[i]);

    sort(marsh_array, n);
    searchInform(marsh_array, n);

    return 0;
}
