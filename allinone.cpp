#include <iostream>
using namespace std;
void tasks(int task);

int main() {
    setlocale(LC_ALL, "Russian");
    int task;
    cout << "Введите номер задачи (1-4): ";
    cin >> task;
    tasks(task);
    return 0;
}
void tasks(int task){

    if (task == 1) {
        cout << "Найти и вывести наибольшее, среднее и наименьшее числа, если все они разные." << endl;
        int a, b, c;
        cout << "Введите три числа: ";
        cin >> a >> b >> c;
        if (a == b || b == c || a == c) {
            cout << "Есть одинаковые числа." << endl;
        } else {
            int maxNum = a;
            if (b > maxNum) maxNum = b;
            if (c > maxNum) maxNum = c;

            int minNum = a;
            if (b < minNum) minNum = b;
            if (c < minNum) minNum = c;

            int midNum = a + b + c - maxNum - minNum;
            cout << "Наибольшее : " << maxNum << " " << "Среднее : " << midNum << " " << "Наименьшее : " << minNum << endl;
        }
    } else if (task == 2) {
        cout << "Описать целое число в диапазоне от -999 до 999." << endl;
        int num;
        cout << "Введите число: ";
        cin >> num;
        if (num < -999 || num > 999) {
            cout << "Число вне диапазона." << endl;
        } else {
            if (num == 0) {
                cout << "ноль" << endl;
            } else {
                if (num < 0) {
                    cout << "отрицательное ";
                } else {
                    cout << "положительное ";
                }

                if (num % 2 == 0) {
                    cout << "четное ";
                } else {
                    cout << "нечетное ";
                }

                if (num > -10 && num < 10) {
                    cout << "однозначное число" << endl;
                } else if (num > -100 && num < 100) {
                    cout << "двузначное число" << endl;
                } else {
                    cout << "трехзначное число" << endl;
                }
            }
        }
    } else if (task == 3) {
        cout << "Вычислить и вывести дату следующего дня." << endl;
        int g, m, d;
        cout << "Введите год, месяц и день: ";
        cin >> g >> m >> d;
        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        d++;
        if (d > daysInMonth[m - 1]) {
            d = 1;
            m++;
            if (m > 12) {
                m = 1;
                g++;
            }
        }
        cout << g << "-" << m << "-" << d << endl;
    } else if (task == 4) {
        cout << "Проверить, есть ли ровно два двузначных числа с одинаковыми цифрами среди трех заданных чисел, если все они нечетные." << endl;
        int x, y, z;
        cout << "Введите три числа: ";
        cin >> x >> y >> z;
        if (x % 2 == 0 || y % 2 == 0 || z % 2 == 0) {
            cout << "Есть четные числа." << endl;
        } else {
            int count = 0;
            if (x >= 10 && x <= 99 && (x / 10 == x % 10)) count++;
            if (y >= 10 && y <= 99 && (y / 10 == y % 10)) count++;
            if (z >= 10 && z <= 99 && (z / 10 == z % 10)) count++;

            if (count == 2) {
                cout << "Да" << endl;
            } else {
                cout << "Нет" << endl;
            }
        }
    } else {
        cout << "Неверный выбор." << endl;
    }

}


