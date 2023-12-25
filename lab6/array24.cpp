#include <iostream>

int main() {
    int n;
    const int N = 5;
    int myArray[N];

    // Введення кількості елементів масиву
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Масив має бути складений принаймні з двох елементів." << std::endl;
        return 1;
    }


    // Введення елементів масиву
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Елемент " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Перевірка на арифметичну прогресію
    int commonDifference = myArray[1] - myArray[0];
    bool isArithmeticProgression = true;

    for (int i = 2; i < n; ++i) {
        if (myArray[i] - myArray[i - 1] != commonDifference) {
            isArithmeticProgression = false;
            break;
        }
    }

    // Виведення результату
    if (isArithmeticProgression) {
        std::cout << "Різниця арифметичної прогресії: " << commonDifference << std::endl;
    }
    else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
