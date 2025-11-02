#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Введіть номер місяця (1–12): ";
    cin >> month;

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "У цьому місяці 31 день." << endl;
        break;
    case 4: case 6: case 9: case 11:
        cout << "У цьому місяці 30 днів." << endl;
        break;
    case 2:
        cout << "У лютому 28 або 29 днів (залежно від року)." << endl;
        break;
    default:
        cout << "Помилка! Номер місяця повинен бути від 1 до 12." << endl;
    }

    return 0;
}
