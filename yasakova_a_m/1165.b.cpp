#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> q1(n);
    for (int i = 0; i < n - 1; i += 1) {
        int f;
        std::cin>>f;
        q1[i] = f;
    }
    std::sort(q1.begin(), q1.end());
    int days = 1;
    for(int j = 0; j < n; j += 1){
        if(q1[j] > days){
            days += 1;
        }
    }
    std::cout<<days;
    return 0;
}
