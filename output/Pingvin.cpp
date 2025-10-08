#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A,B,C,D,alpha;
    cin >> A >> B >> C >> D >> alpha;
    A=A+D; D=A-D; A=A-D;
    D=D+C; C=D-C; D=D-C;
    A=A+B; B=A-B; A=A-B;

    cout << A << " " << B << " " << C << " " << D << endl;
    cout << alpha*180.0/M_PI;
    return 0;
}