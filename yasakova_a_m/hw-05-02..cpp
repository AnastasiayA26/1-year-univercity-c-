#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

int main(){
    float a = 0;
    float b = 1;
    double si = 0.05;
    double e = 0.001;
    std :: cout<< "x | s(x) | f(x)"<< std:: endl;
    double s = 0;
    double f = 0;
    for(double x = a ; x < b + si; x += si){
        double i = 0;
        s = 0;
        double k = 1;
        double f = 0;
        while(abs(k) > e && k != 0){
            i += 1;
            k = (std::pow(x, i) * sin(i * M_PI / 4));
            s += k;
        }
        f = (x *  std::sin(M_PI/ 4)) / (1 - 2 * x * std::cos(M_PI/4));
        std::cout << x << " | " << s << " | " << f << std::endl;

    }
    return 0;
}



