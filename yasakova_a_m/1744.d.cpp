#include<iostream>
#include<algorithm>
#include <vector>
int q(int n){
    int t = 0;
    while(n % 2 == 0){
        n /= 2;
        t += 1;
    }
    return t;
}

int main()
{
    int num;
    std::cin>>num;
    for(int i = 0; i < num; i += 1){
        int total = 0;
        int count = 0;
        int last = 0;
        std::cin>>total;
        std::vector<int> a;
        std::vector<int> b;
        int p = 2;
        for(int j = 0; j < total; j += 1){
            int number = 0;
            std::cin>>number;
            if(number % 2 == 0){
               count += q(number);
            }
            if(j % 2 == 1 and j + 1 != p){
                last += q(j + 1);
                b.push_back(j + 1);
            }
            if(j % 2 == 1 and j + 1 == p){
                p *= 2;
                last +=  q(j + 1);
                a.push_back(j+1);
            }
        }
        if(count >= total){
            std::cout<<"0"<<std::endl;
        }
        else {
            if (count + last < total) {
                std::cout << "-1" << std::endl;
            }
            else{
                if(count < total){
                    int k = a.size();
                    int r = 0;
                    while(count < total and k > -1){
                        count += q(a[k - 1]);
                        r += 1;
                        k -= 1;
                    }
                    if(count != total){
                      int m = b.size();
                      while(count < total){
                          count += q(b[m - 1]);
                          r += 1;
                          m -= 1;
                      }
                    }
                    std::cout<< r << std::endl;
                }
            }
        }
    }
    return 0;
}
