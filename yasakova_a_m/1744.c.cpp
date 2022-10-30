#include<iostream>
#include<algorithm>
#include<string>

int main()
{
    int req = 0;
    std::cin>>req;
    for(int i = 0; i < req; i+= 1){
        int len = 0;
        std::string color;
        int maxt = 0;
        std::string s;
        std::cin>>len;
        std::cin>>color;
        std::cin>>s;
        std::string col = s + s;
        int t = 0;
        int g = 1;
        for(int j = 0; j < len * 2; j += 1){
            if(col[j] == color[0] and g != 0){
                g = 0;
            }
            if(col[j] == 'g'){
                maxt = std::max(maxt, t);
                t = 0;
                g = 1;

            }
            else{
                if(g == 0){
                    t += 1;
                }
            }
        }
        std::cout<< maxt << std::endl;
    }
    return 0;
}
