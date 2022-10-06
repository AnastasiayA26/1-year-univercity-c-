#include <iostream>

int main(){
    int ix = 0;
    int jy = 0;
    for(int i = 0; i < 5; i+=1){
        for(int j = 0; j < 5; j+=1){
            int a;
            std::cin >> a;
            if(a == 1){
                ix = i;
                jy = j;

            }

        }
    }
    std::cout<< abs(2 - ix) + abs(2 - jy);

}

