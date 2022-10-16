#include <iostream>

int main(){
    int n = 0;
    std::cin>>n;
    for(int i = 0; i < n; i+= 1) {
        int s = 0;
        for (int elem = 0; elem < 4; elem += 1){
            int t = 0;
            std::cin>>t;
            s += t;
        }
        if(s == 0){
            std::cout<<"0"<<std::endl;
        }
        else {
            if (s == 1 or s == 2 or s == 3) {
                std::cout << "1" << std::endl;
            } else {
                std::cout << "2" << std::endl;
            }
        }
    }
  return 0 ;
}
