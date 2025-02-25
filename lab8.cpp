#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;
    std::vector<double> arr(n);
    std::cout << "Введите элементы массива: ";

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    double sum_negative = 0;
    for (const auto& elem : arr) {
        if (elem < 0) {
            sum_negative += elem;
        }
    }

    int first_zero_index = -1;
    int last_zero_index = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i; 
            }
            last_zero_index = i; 
        }
    }

    double sum_between_zeros = 0;
    if (first_zero_index != -1 && last_zero_index != -1 && first_zero_index != last_zero_index) {
        for (int i = first_zero_index + 1; i < last_zero_index; ++i) {
            sum_between_zeros += arr[i];
    }
    std::sort(arr.begin(), arr.end());
    std::cout << "Сумма отрицательных элементов: " << sum_negative << std::endl;
    std::cout << "Сумма элементов между первыми нулями: " << sum_between_zeros << std::endl;
    std::cout << "Упорядоченный массив: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
