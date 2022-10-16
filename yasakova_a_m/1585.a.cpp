#include <iostream>
#include <vector>

int main() {
    int n = 0;
    int grou = 0;
    std::cin>>n;
    for(int i = 0; i < n; i+= 1) {
        int t;
        grou = 1;
        std::cin >> t;
        std::vector<int> a(t + 1);
        a[t] = 100;
        for(int j = 0; j < t; j += 1){
            int tmp;
            std::cin>>tmp;
            a[j] = tmp;
        }

        for(int w = 0; w < t; w += 1){
            if(a[w] == 1 && a[w + 1] == 1){
                grou += 5;
                }
            else{
                if(a[w] == 0 && a[w+1] == 0){
                    grou = -10000000;
                    }
                if(a[w] == 1){
                    grou += 1;
                }

                }
            }
        if(grou > 0){
            std::cout<<grou << std::endl;
        }
        else{
            std::cout<<"-1" << std::endl;
            grou = 0;
        }
    }
    return 0;
}

