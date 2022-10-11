#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::cin>>n;
    for(int i = 0; i < n; i+= 1) {
        int t = 0;
        int time = 0;
        std::cin >> t;
        int k;
        k = t*2 + t;
        std::vector<int> a(k);
        std::cout<<k;
        for(int j = 0; j < t; j += 1){
            int tmp;
            std::cin>>tmp;
            a.push_back(tmp);
        }
        time = a[0];
        for(int r = 1; r <  t * 2 + t; r+=1){
            time += a[r] - a[r - 1] + a[- t + r];
        }
        std::cout << time << std::endl;
    }
    return 0;
}

