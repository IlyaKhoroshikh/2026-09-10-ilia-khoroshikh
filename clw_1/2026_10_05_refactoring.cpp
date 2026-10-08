#include <cmath>
#include <iostream>

int main() { 
    int day, n_day_of_week, month, year;
    std::cout << "введите число месяца" << std::endl;
    std::cin >> day;

    std::cout << "введите номер месяца" << std::endl;
    std::cin >> month;

    std::cout << "введите год" << std::endl;
    std::cin >> year;

    int year_short = year % 100;
    int century = year / 100;

    // Формула Целлера
    n_day_of_week = (
        day + 
        (13 * month - 1) / 5 + 
        year_short / 4 + 
        century / 4 - 
        2 * century
    ) % 7;

    const char* days_names[] = {
        "воскресенье", "понедельник", "вторник",
        "среда", "четверг", "пятница", "суббота"
    };

    std::cout << days_names[n_day_of_week] << std::endl;

    return 0;
}
