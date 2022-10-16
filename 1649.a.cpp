#include <iostream>

int main() {
    int r = 0;
    int play = 0;
    std::cin>>r;
    for(int i = 0; i < r; i += 1) {
        std::cin >> play;
        int indmi0 = 1000000;
        int indma0 = 0;
        for (int steps = 0; steps < play; steps += 1) {
            int tmp;
            std::cin >> tmp;
            if (tmp == 0) {
                if (indmi0 > steps) {
                    indmi0 = steps;
                }
                if (indma0 < steps) {
                    indma0 = steps;
                }
            }
        }
            if(indma0 ==0){
                std::cout << indma0 << std::endl;
            }
            else{
                 if(indma0 == indmi0){
                std::cout<< 2 << std::endl;
                }
                else{
                std::cout << indma0 - indmi0 + 2 << std::endl;
                }
            }
        }
        return 0;
    }


