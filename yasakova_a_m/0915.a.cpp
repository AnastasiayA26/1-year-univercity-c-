#include <iostream>
#include <vector>

int main() {
    int bas = 0;
    int garden = 0;
    int ma = 10000;
    std::cin>>bas>>garden;
    for(int i = 0; i < bas; i+= 1) {
        int tmp;
        std::cin>>tmp;
        if(garden % tmp == 0 && ma > garden / tmp){
            ma = garden / tmp;
        }

    }
    std::cout<<ma;
    return 0;
}

