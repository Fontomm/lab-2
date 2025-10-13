#include <iostream>
using namespace std;

int main() {
    double A, B, C, D;

    cout << "Введіть чотири числа (A, B, C, D): ";
    cin >> A >> B >> C >> D;

    A = A + D;
    D = A - D;
    A = A - D;

    D = D + C;
    C = D - C;
    D = D - C;

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "Результат: A=" << A << "  B=" << B << "  C=" << C << "  D=" << D << endl;

    return 0;
}