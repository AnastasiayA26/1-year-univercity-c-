#include <iostream>
#include <array>

int main(){
    const int q = 50;
    std::array<int, q> mass{0};
    int n;
    std::cin>>n;
    for(int i = 0; i < n; i+=1){
        int a;
        std::cin>>a;
        mass[i]=a;
    }
    for(int j = n;j > 0; j-=1){
        int k;
        k = mass[j];
        for(int t = 0; t < j; t+=1){
            if(mass[t] == k){
                mass[t] = 0;
            }
        }
    }
    int count = 0;
    for(int r=0; r < n; r+=1){
        if (mass[r] !=0){
            count += 1;
        }
    }
    std::cout<<count<<"\n";

    for(int p=0; p < n; p+=1){
        if (mass[p] !=0){
            std::cout<<mass[p]<<" ";
        }
    }

}
