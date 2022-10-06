#include <iostream>

int main(){
    int w = 0;
    int count = 0;
    std::cin >> w;

    count += w / 5;
    w %= 5;
    count += w / 4;
    w %= 4;
    count += w / 3;
    w %= 3;
    count += w / 2;
    w %= 2;
    if(w > 0){
        count += 1;
    }

    std::cout << count;
}


