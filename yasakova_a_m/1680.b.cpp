#include <iostream>
#include <string>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i+= 1){
        std::string robots;
        int row = 0;
        int col = 0;
        int okd = 0;
        int oks = 0;
        int good = 0;
        std::cin>>row>>col;
        for(int j = 0; j < row; j += 1){
            std::cin>> robots;
            for(int t = 0; t < col; t += 1){
                if(robots[t] == 'E' and t == 0){
                    okd += 1;
                }
                if(j == 0 and robots[t] == 'E'){
                    oks += 1;
                }
                if(j == 0 and t == 0 and robots[t] == 'R'){
                    good = 1;
                }
            }
        }
        if((okd == 0 or oks == 0 or okd == row) and col != 1 and oks == col and okd == row){
            std::cout<<"YES"<<std::endl;
        }
        else{
            if((okd == 0 or oks == 0 or okd == row or oks == col) and col <= 2){
                std::cout<<"YES"<<std::endl;
            }
            else {
                if (good == 1 or row == 1) {
                    std::cout << "YES" << std::endl;
                } else {
                    std::cout << "NO" << std::endl;
                }
            }
        }
    }
    return 0;
}
