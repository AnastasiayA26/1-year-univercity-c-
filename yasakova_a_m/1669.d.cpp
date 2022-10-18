#include <iostream>
#include <vector>

int main(){
  int n = 0;
  std::cin>>n;
  std::vector<std::string> a(n);
  for(int i = 0; i < n; i+=1){
     std::string t;
     int k = 0;
     std::cin>>k;
     std::cin>>t;
     int w = 0;
     int r = 0;
     int b = 0;
     for(int j = 0; j<k; j += 1){
         if(t[j] == 'W'){
             w += 1;
         }
         else {
             if(t[j] == 'R')
             {
                 r += 1;
             }
             else{
                 b += 1;
             }
         }
     }
     int q = 0;
     for(int f = 1; f < k-1; f += 1){
         if(t[f - 1] == 'W' and t[f+1] == 'W'){
             q += 1;
         }
         if(t[f] == 'W' and t[f -1] != 'W' and t[f + 1] != 'W'){
             q += 1;
         }
     }
      if (w == k) {
          std::cout << "YES" << std::endl;
      }
     if((q != 0 and w != k) or b == 0 or r == 0){
         std::cout<<"NO"<<std::endl;
     }
     else {
         std::cout<<"YES" << std::endl;
         }
  }
  return 0 ;
}
