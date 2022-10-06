#include <iostream>

int main() {
  int x, y, x1, y1;
  std:: cin >> x >> y >> x1 >> y1; 
  if(abs(x - x1) == abs(y - y1)){
     std:: cout << "YES";
  }
  else{
     if(x == x1 || y == y1){
     std:: cout << "YES";
  }
    else{
      std:: cout << "NO";
    }
  }
  return 0;
}