#include <iostream>

int main(){
    int n = 0;
    std::cin>> n;
    for(int i = 0; i < n; i+=1){
        int ch = 0;
        int count = 0;
        std::cin >> ch;
        int a = ch / 1000;
        if (a != 0){
            count += 1;
        }
        int b = (ch -  a * 1000) / 100;
        if (b != 0){
            count += 1;
        }
        int c = (ch -  a * 1000 - b * 100) / 10;
        if (c != 0){
            count += 1;
        }
        int d = ch % 10;
        if (d!= 0){
            count += 1;
        }
        std::cout<< count << "\n";
        if(a != 0){
            std::cout << a * 1000 << " ";
        }
        if(b != 0){
            std::cout << b * 100 << " ";
        }
        if(c != 0){
            std::cout << c * 10 << " ";
        }
        if(d != 0){
            std::cout << d << " ";
        }
        std::cout<< "\n";

        }
    }




