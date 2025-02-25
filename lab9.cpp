#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>


std::string getMonthName(int month) {
    const std::vector<std::string> months = {
        "январь", "февраль", "март", "апрель",
        "май", "июнь", "июль", "август",
        "сентябрь", "октябрь", "ноябрь", "декабрь"
    };
    return months[month - 1];
}

int main() {
    setlocale(LC_ALL, "RUS");
    std::string input_date;
    std::cout << "Введите дату  ";
    std::getline(std::cin, input_date);

    int day, month, year;
    char delimiter1, delimiter2;


    std::istringstream date_stream(input_date);
    date_stream >> day >> delimiter1 >> month >> delimiter2 >> year;


    if (delimiter1 != '.' || delimiter2 != '.') {
        std::cerr << "Неправильный формат даты" << std::endl;
        return 1;
    }


    if (year < 100) {
        year += 2000;
    }


    std::cout << "День, месяц, год:  "
        << getMonthName(month) << " " << std::setw(2) << std::setfill('0') << day
        << ", " << year << std::endl;

    return 0;
}
