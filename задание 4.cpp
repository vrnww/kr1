#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    char cmd;

    // вводим коэффициенты и команду
    cin >> a >> b >> c;
    cin >> cmd;

    if (cmd == 'H') {
        // выводим имя
        cout << "Zvanskaya Veronika" << endl;
    }
    else if (cmd == 'm') {
        // решаем квадратное уравнение
        if (a == 0 && b == 0 && c == 0) {
            cout << "x - " << endl;
        }
        else if (a == 0) {
            // линейное уравнение bx + c = 0
            if (b == 0) {
                cout << "корней нет" << endl;
            } else {
                cout << "x = " << -c / b << endl;
            }
        }
        else {
            double d = b * b - 4 * a * c;
            if (d > 0) {
                double x1 = (-b + sqrt(d)) / (2 * a);
                double x2 = (-b - sqrt(d)) / (2 * a);
                cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
            }
            else if (d == 0) {
                cout << "x = " << -b / (2 * a) << endl;
            }
            else {
                cout << "корней нет" << endl;
            }
        }
    }
    else if (cmd == 's') {
        // спрашиваем номер дня недели
        int day;
        cout << "Vvedite nomer dnya nedeli: ";
        cin >> day;

        switch (day) {
            case 1: cout << "Ponedelnik" << endl; break;
            case 2: cout << "Vtornik" << endl; break;
            case 3: cout << "Sreda" << endl; break;
            case 4: cout << "Chetverg" << endl; break;
            case 5: cout << "Pyatnitsa" << endl; break;
            case 6: cout << "Subbota" << endl; break;
            case 7: cout << "Voskresenye" << endl; break;
            default: cout << "Nevernyy nomer dnya" << endl;
        }
    }
    else {
        cout << "Неизвестная команда" << endl;
    }

    return 0;
}