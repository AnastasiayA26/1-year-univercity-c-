#include <iostream>
#include <string>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i += 1){
       int lenght = 0;
       int stripe = 0;
       std::cin>>lenght>>stripe;
       int micolor = 100000000;
       std::string reco;
       std::cin>>reco;
       int b = 0;
       if(lenght == stripe){
           for(int r = 0; r < stripe; r += 1){
               if(reco[r] == 'B'){
                   b += 1;
               }
           }
           micolor = lenght - b;
       }
       else {
           for (int j = 0; j < lenght - stripe + 1; j += 1) {
               b = 0;
               for (int t = j; t < stripe + j; t += 1) {
                   if (reco[t] == 'B') {
                       b += 1;
                   }
               }
               if (stripe - b < micolor) {
                   micolor = stripe - b;
               }
           }
       }
       std::cout<<micolor<<std::endl;
    }
    return 0;
}
 

