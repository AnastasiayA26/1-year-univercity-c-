#include <iostream>
#include <vector>
#include <string>

int main(){
  int n = 0;
  std::cin>>n;
  for(int i = 0; i < n; i+=1){
      std::vector<int> a(8);
      std::vector<std::string> to(8);
      int ox = 0;
      int oy = 0;
      for(int j = 0; j < 8; j += 1){
          std::string k;
          std::cin>>k;
          to[j] = k;
          int count = 0;
          for(int t = 0; t < 8; t += 1){
              if(k[t] == '#'){
                  count += 1;
              }
          }
          a[j] = count;
      }
      for(int r = 0; r < 6; r += 1){
          if(a[r] == 2 and a[r + 1] == 1 and a[r + 2] == 2){
              ox = r + 2;
              std::string w;
              std::cout<< w;
              w = to[r + 1];
              for(int y = 0; y < 8; y += 1){
                  if(w[y] == '#'){
                     oy = y + 1;
                      break;
                  }
              }
              std::cout<<ox << " " << oy<< std::endl;
          }
      }
  }
  return 0 ;
}
