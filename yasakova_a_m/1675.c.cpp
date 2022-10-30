#include <iostream>
#include <string>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i+= 1) {
        std::string rob;
        int si = 0;
        int last1 = -100;
        int first0 = -100;
        std::cin>>rob;
        si = rob.size();
        for(int j = 0; j < si; j += 1){
            if(rob[j] == '1' and first0 < -1){
                last1= j;
            }
            if(rob[j] == '0'){
                first0 = j;
                break;
            }
        }
        if(last1 > -1 and first0 > -1){
            std::cout<< first0 - last1 + 1 << std::endl;
        }
        else {
            if (last1 > -1 and first0 < -1) {
                std::cout << si - last1 << std::endl;
            }
            else {
                if (last1 < -1 and first0 > -1) {
                    std::cout << first0 + 1 << std::endl;
                } else {
                    std::cout << si << std::endl;
                }
            }
        }
    }
    return 0;
}
