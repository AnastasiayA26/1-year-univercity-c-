#include <iostream>
#include<vector>

int main(){
    int n = 0;
    std::cin>>n;
    std::vector<int> a(n);
    for(int i = 0; i < n; i+= 1){
        int tmp = 0;
        std::cin>> tmp;
        a[tmp - 1] = i + 1;
    }
    for(int r:a){
        std::cout<< r << " ";
    }
  return 0 ;
}

