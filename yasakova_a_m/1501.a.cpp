#include <iostream>
#include <vector>

int main(){
    int n = 0;
    std::cin>> n;
    for(int elem = 0; elem < n; elem+=1){
        int total =0;
        std::cin>>total;
        std::vector<int> wait(total);
        std::vector<int> arri(total* 2);
        std::vector<int> train(total* 2 + 1);
        for(int time = 0; time < total* 2; time += 1){
            int tmp = 0;
            std::cin>>tmp;
            arri[time] = tmp;
        }
        for(int t = 0; t < total; t += 1){
            int stai = 0;
            std::cin>>stai;
            wait[t] = stai;
        }
        int count = wait[0] + arri[0];
        for(int j = 1; j < total * 2 - 1; j += 1){
            if(j % 2 == 0) {
                count += arri[j] - arri[j - 1] + wait[j/2];
            }
            else{
                if((arri[j] - arri[j - 1]) % 2 == 0  && count > arri[j-1]){
                    count += (arri[j] - arri[j-1])/2;
                }
                else {
                    if ((arri[j] - arri[j - 1]) % 2 == 0 and (arri[j] - count <= ((arri[j] - arri[j - 1]) / 2))) {
                        count += (arri[j] - arri[j - 1]);
                    } else {
                        count += (arri[j] - arri[j - 1]) / 2 + 1;
                    }
                }
            }

        }
        std::cout<<count<<std::endl;
    }
  return 0 ;
}
