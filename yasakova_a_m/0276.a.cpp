#include <iostream>

int main(){
    int n = 0;
    int t = 0;
    int maxi = -100000000000;
    int m = -100000000000;

    std::cin>> n >> t;
    for(int i = 0; i < n; i+=1){
        int pl = 0;
        int time = 0;
        std::cin>>pl>>time;
        if(time <= t && pl >= maxi){
            maxi = pl;
        }
        if(time > t && (pl - (time - t)) > maxi){
            maxi = pl - (time - t);
        }

    }
    std:: cout << maxi;
    }
