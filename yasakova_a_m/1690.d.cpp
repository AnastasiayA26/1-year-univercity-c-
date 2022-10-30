#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i+= 1) {
        std::string rob;
        int si = 0;
        int lenght = 0;
        std::cin >> si >> lenght >> rob;
        int b = 0;
        int maxw = 100000;
        for (int j = 0; j < si - lenght; j += 1) {
            if (rob[j] == 'B' and rob[j + lenght] == 'W' or rob[j] == 'B' and rob[j + lenght] == 'B' or rob[j] == 'W' and rob[j + lenght] == 'B') {
                b += 1;
            } else {
                    maxw = std::min(maxw, lenght - b);
                    if (lenght - b < 0) {
                        maxw = 0;
                        break;
                    }
            }
        }
        maxw = std::min(maxw, lenght - b);
        b = 0;
        for(int w = 0; w < lenght; w += 1){
            if(rob[w] == 'B'){
                b += 1;
              }
            }
        maxw = std::min(maxw, lenght - b);
        if (maxw < 0) {
            maxw = 0;
        }
            std::cout << maxw << std::endl;
    }
    return 0;
}
