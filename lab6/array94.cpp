#include <iostream>

int main() {
    int n;
    const int N = 5;
    int myArray[N];
    // Введення кількості елементів масиву
    std::cout << "Введіть кількість елементів масиву (n > 2): ";
    std::cin >> n;

    if (n <= 2) {
        std::cout << "Кількість елементів масиву повинна бути більше 2." << std::endl;
        return 1;
    }

    // Введення елементів масиву
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Елемент " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Видалення елементів з непарними номерами
    for (int i = 1; i < n; i += 2) {
        myArray[i] = 0; // Замінюємо елементи з непарними номерами на 0
    }

    // Виведення оновленого масиву
    std::cout << "Оновлений масив:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
