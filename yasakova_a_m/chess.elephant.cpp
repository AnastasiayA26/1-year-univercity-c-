#include <iostream>

int main() {
  int x, y, x1, y1;
  std:: cin >> x >> y >> x1 >> y1;
  if ((x == x1 && y + 1 == y1) || (x == x1 && y - 1 == y1) || (x + 1 == x1 && y == y1) || (x - 1 == x1 && y == y1)){
     std:: cout << "YES";
  }
  else{
     if ((x + 1 == x1 && y + 1 == y1) || (x + 1 == x1 && y - 1 == y1) || (x - 1 == x1 && y + 1 == y1) || (x - 1 == x1 && y - 1 == y1)){
     std:: cout << "YES";
  }
      else{
      std:: cout << "NO";
      }
  }
  return 0;
}


