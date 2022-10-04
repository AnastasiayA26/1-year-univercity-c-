#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

double fact(double n)
{
    if(n < 0){
    return 0;
    }
    if (n == 0){
      return 1;
    }
    else{
       return (n * fact(n - 1));
    }
}

int main(){
    float a = 0;
    float b = 1;
    double si = 0.1;
    double m = 0.0001;
    std :: cout<< "x | s(x) | f(x)"<< std:: endl;
    double s = 0;
    double f = 0;
    for(double x = a ; x < b; x += si){
        double i = -1;
        s = 0;
        double k = 1;
        double f = 0;
        while(abs(k) > m){
            i += 1;
            k = std::pow(2* x, i)/ fact(i);
            s += k;
        }
        f = pow(M_E, 2* x);
        std::cout << x << " | " << s << " | " << f << std::endl;

    }
    return 0;
}



