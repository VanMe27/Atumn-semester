#include <iostream>
#include <fstream> //для чтения и записи из файла или в файл
#include <cctype> //объявление функций для классификации и преобразовния отдельных символов 
using namespace std;

bool startsWithVowel(const string& word) {
    // Проверка, начинается ли слово с гласной буквы
    char firstChar = tolower(word[0]);
    return (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' ||
        firstChar == 'o' || firstChar == 'u');
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        return 1;
    }

    string word;
    char ch;

    while (inputFile.get(ch)) {
        if (isalpha(ch)) {
            word += ch; // Собираем буквы слова
        }
        else {
            // Если слово было собрано, обрабатываем его
            if (!word.empty()) {
                if (startsWithVowel(word)) {
                    // Преобразуем все буквы слова в прописные
                    for (char& c : word) {
                        c = toupper(c);
                    }
                }
                cout << word; // Выводим слово
                word.clear(); // Очищаем слово
            }
            cout << ch; // Выводим не буквенный символ
        }
    }

    // Обрабатываем последнее слово, если оно есть
    if (!word.empty()) {
        if (startsWithVowel(word)) {
            for (char& c : word) {
                c = toupper(c);
            }
        }
        cout << word; // Выводим последнее слово
    }

    inputFile.close(); // Закрываем файл
    cout << endl; // Для переноса строки
    return 0;
}
