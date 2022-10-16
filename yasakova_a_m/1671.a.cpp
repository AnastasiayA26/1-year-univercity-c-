#include <iostream>
#include <string>
#include <vector>

int main(){
    int n = 0;
    std::cin>>n;
    std::string a;
    for(int i = 0; i < n; i+= 1) {
        std::cin >> a;
        std::string t = "k";
        a +=  t;
        int va = 0;
        int b = 0;
        bool flag = true;
        for (int elem = 0; elem < a.size() - 1; elem += 1)
            if (a[elem] == a[elem + 1]) {
                if (a[elem] == 'a') {
                    va += 1;
                } else {
                    b += 1;
                }
            } else {
                if (a[elem] == 'a') {
                    va += 1;
                    if (va == 1) {
                        flag = false;
                    }
                    va = 0;
                } else {
                    b += 1;
                    if (b == 1) {
                        flag = false;
                    }
                    b = 0;
                }
            }
        if (flag and a.size()>1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
  return 0 ;
}
