#include <iostream>
#include <cmath>

//(i+s) % k
int main() {
	int p;
	int n;
	int m;
	int sx;
	int sy;
	int d;
	std::cin >> p;
	for (int i = 0; i < p; i += 1) {
		std::cin >> n >> m >> sx >> sy >> d;
		if((sy - d > 1 && (n - sx) > d) || ((sx - d) > 1 && (m - sy) > d)){
           std::cout << m + n - 2 << "\n";
		}
		else{
            std::cout<< -1 << "\n";

            }
		}
    return 0;
    }
