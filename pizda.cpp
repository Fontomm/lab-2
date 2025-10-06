#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x = 1324.3e-2;
    double y = 1.613e3;
    double z = 0.613;
    
    double inner = pow(fabs(y), 3.0) * exp(x - 1.0) / sin(z);
    double p = 0.30452310614242106;
    double addon = pow(inner, p);
    double s = pow(2.0, -x) * sqrt(x + addon);
    std::cout << "s = " << s << std::endl;
    return 0;
}