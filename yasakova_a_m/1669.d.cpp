#include <iostream>
#include <string>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i += 1){
        int lenght = 0;
        std::cin>>lenght;
        std::string word;
        std::cin>>word;
        std::string untillw;
        bool flag = true;
        int r = 0;
        int b = 0;
        for(int j=0; j < lenght; j += 1){
            if(word[j] != 'W'){
                if(word[j] == 'R'){
                    r += 1;
                    untillw += word[j];
                }
                else{
                    b += 1;
                    untillw += word[j];
                }
            }
            if(j != 0 and word[j] == 'W' and (untillw.size() != 0 and untillw.size() != 1) and (r != untillw.size() and b != untillw.size())){
                untillw.clear();
                r = 0;
                b = 0;
            }
            else {
                if (j != 0 and word[j] == 'W' and untillw.size() == 1) {
                    flag = false;
                    r = 0;
                    b = 0;
                    break;
                }
                if(j !=0  and (j != lenght - 1) and word[j] == 'W' and (untillw.size() == r or untillw.size() == b) and untillw.size() != 0){
                    flag = false;
                    r = 0;
                    b = 0;
                    untillw.clear();
                }
            }
        }
        if((r == untillw.size() or b == untillw.size()) and untillw.size() != 0){
            std::cout<<"NO"<<std::endl;
        }
        else {
            if (flag and untillw.size() != 1) {
                std::cout << "YES" << std::endl;
                untillw.clear();
            } else {
                std::cout << "NO" << std::endl;
                untillw.clear();
            }
        }
    }
    return 0;
}

