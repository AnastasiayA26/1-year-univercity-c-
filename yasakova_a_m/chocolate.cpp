#include <iostream>

int main() {
  int x, y, n;
  std:: cin >> x >> y >> n; 
  if((n % x == 0 || n % y == 0) && (n <= (x * y))){
      std:: cout<< "YES";
      }
  else{
    std:: cout << "NO";
  }
  return 0;
}