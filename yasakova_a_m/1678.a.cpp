#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n = 0;
  std::cin>>n;
  for(int i = 0; i < n; i+=1){
      int total = 0;
      std::cin>>total;
      std::vector<int> a(total);
      int count = 0;
      for(int j = 0; j < total; j += 1){
          int k = 0;
          std::cin>>k;
          a[j] = k;
          count += k;
      }
      sort (a.begin(), a.end());
      int che = 0;
      while(count != 0) {
          count = 0;
          for (int t = 0; t < total - 1; t += 1) {
              if (a[t] == a[t + 1] and a[t] != 0) {
                  a[t] = 0;
                  che += 1;
                  break;
              }
          }
          for (int r = 0; r < total - 1; r += 1) {
              if (a[r] > a[r + 1]) {
                  a[r] = a[r + 1];
                  che += 1;
                  break;
              } else {
                  if (a[r] < a[r + 1]) {
                      a[r + 1] = a[r];
                      che += 1;
                      break;
                  }
              }

          }
          for(int j = 0; j < total; j += 1){
              count += a[j];
          }
      }
      std::cout<<che<<std::endl;
      }
  return 0 ;
}
