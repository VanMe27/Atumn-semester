#include <iostream>

int main() {
    // Определяем размеры матрицы
    const int rows = 4;
    const int cols = 3;

    // Объявляем и инициализируем матрицу
    int matrix[rows][cols] = {
        {1, -2, 3},
        {4, 5, -6},
        {-7, 8, 9},
        {4, -2, 24}
    };

    int sums[cols] = { 0 };

    for (int j = 0; j < cols; ++j) 
    {  
        for (int i = 0; i < rows; ++i) 
        {  
            if (matrix[i][j] > 0) { // если элемент положительный
                sums[j] += matrix[i][j]; // добавляем к сумме
            }
        }
    }

    // Выводим полученные суммы
    std::cout << "Суммы положительных элементов столбцов:\n";
    for (int j = 0; j < cols; ++j) {
        std::cout << sums[j] << " "; // выводим каждую сумму
    }
    std::cout << std::endl;

}
