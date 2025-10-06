#include <iostream>
#include <cmath> 

int main() {// 13
    double x = 1324.3e-2;
    double y = 1.613e3;
    double z = 0.613;
    
    double s = (sqrt(x + y) - z) / (x * y * z);
    std::cout << "s = " << s << std::endl;
    return 0;
}