#include <iostream>

int main(){
    int y = 0;
    std::cin >> y;
    for(int i = y + 1; i <= 90000; i+= 1){
        int a = i / 1000;
        int b = (i - a * 1000) / 100;
        int c = (i - a * 1000 - b * 100) / 10 ;
        int d = i % 10;
         if((a != b && a != c && a != d && b != c && b != d && c != d) == 1){
            std::cout<< i;
            break;
         }

    }

}


