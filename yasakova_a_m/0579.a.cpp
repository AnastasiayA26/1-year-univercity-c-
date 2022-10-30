#include<iostream>
#include<algorithm>

int main()
{
    int num;
    std::cin>>num;
    int total = 0;
    while(num > 0){
        int k;
        k = num % 2;
        num /= 2;
        total += k & 1;
    }
    std::cout<< total;
    return 0;
}
