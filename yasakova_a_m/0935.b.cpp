#include <iostream>
#include <string>

int main() {
    int steps = 0;
    int x = 0;
    int y = 0;
    std::string pos;
    std::cin>>steps;
    std::cin>>pos;
    int count = 0;
    int tmpx = 0;
    int tmpy = 0;
    for(int i = 0; i < steps; i += 1){
        if(pos[i] == 'R'){
            tmpx = x;
            tmpy = y;
            x += 1;
        }
        else{
            tmpy = y;
            tmpx = x;
            y += 1;
        }
        if(x == y && i + 1 < pos.size()){
            int tmpx1 = x;
            int tmpy1 = y;
            if(pos[i + 1] == 'R'){
                tmpx1 += 1;
            }
            else{
                tmpy1 += 1;
            }
            int asy = abs(tmpy1 - tmpy);
            int asx = abs(tmpx1 - tmpx);
            if((asy == 0 && asx > 0) or (asy > 0 && asx == 0)){
                count += 1;
            }
        }
    }
    std::cout<<count;
    return 0;
}


