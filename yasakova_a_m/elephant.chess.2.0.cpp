#include <iostream>

int main() {
  int x, y, x1, y1;
  std:: cin >> x >> y >> x1 >> y1; 
  if((abs(x1 - x)*abs(x1 - x)  + abs(y - y1)*abs(y - y1)) == 5){
    std::cout << "YES";
  }
  else{
    std:: cout << "NO";
  }
  return 0;
}