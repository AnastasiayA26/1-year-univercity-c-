#include <queue>
#include <iostream>

int main() {
    std::queue<long long> q1;
    long long n;
    long long wincount;
    std::cin >> n >> wincount;
    long long tmp;
    std::cin >> tmp;
    long long count = 0;
    bool flag = true;
    for (long long i = 0; i < n - 1; i += 1) {
        long long k = 0;
        std::cin >> k;
        if (k < tmp) {
            count += 1;
            q1.push(k);
            if (count == wincount) {
                std::cout << tmp;
                flag = false;
                break;
            }
        } else {
            q1.push(tmp);
            tmp = k;
            count = 0;
        }
    }
    int y = 500;
    while (not flag or y > 0) {
        y -= 1;
        for (long long j = 0; j < n; j += 1) {
            long long k = q1.front();
            q1.pop();
            if (k < tmp) {
                count += 1;
                q1.push(k);
                if (count == wincount) {
                    std::cout << tmp;
                    flag = false;
                    break;
                }
            } else {
                q1.push(tmp);
                tmp = k;
                count = 0;
            }
        }
    }
    if(flag){
        std::cout<<tmp<<std::endl;
    }
    return 0;
}
