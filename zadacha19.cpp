#include <iostream>
#include <cmath>

using namespace std;

int main() { // Функція типу int
    float x, y, r; // Декларування змінних типу float
    bool ar1, ar2; // Декларування змінних типу bool
    int n, count = 0;

    cout << "Number of times: ";
    cin >> n;

    cout << "Enter the radius of the circle : ";
    std::cin >> r;

    for (int i = 1; i <= n; i++)
    {

        if (r > 0)
        {
            cout << "Enter a point by coordinate х : ";
            cin >> x;
            cout << "Enter a point by coordinate y : ";
            cin >> y;


            ar1 = pow((x - r), 2) + pow((y - r), 2) > pow(r, 2) && x < r && y < r && y>0 && x>0; //Рівняння першої фігури(верхньої)
            ar2 = x > 0 && y < 0 && x<r && y>x - 2 * r; //Рівняння другої фігури(нижньої)

            if (ar1 || ar2) {
                cout << "In" << endl;
                count++;
            }
            else {
                cout << "Out" << endl;
            }

        }
        else {
            cout << "The radius cannot be negative" << endl;
        }
    }
    cout << "Number of successful attempts: " << count << " / " << n;
}