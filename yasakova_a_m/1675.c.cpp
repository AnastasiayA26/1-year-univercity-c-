#include <iostream>
#include <string>

int main() {
    int repeat = 0;
    std::cin>>repeat;
    for(int i = 0; i < repeat; i += 1){
        std::string word;
        std::cin>>word;
        std::string untill;
        int q = 0;
        int inde0 = 0;
        int ind1 = 0;
        int ind1l = 0;
        int inde0l = 0;
        for(int j=word.size() - 1; j >= 0; j -= 1){
            if(word[j] == '0') {
                inde0l = inde0;
                inde0 = j;
            }
            if(word[j] == '1' and  inde0 != 0){
                ind1 = j;
                break;
                }
            if(word[j] == '1' and  inde0 == 0 and ind1l == 0){
                ind1l = j;
            }
            if(word[j] == '1' and inde0 == 0 and ind1l != 0){
                ind1 = j;
            }
            if(word[j] == '?'){
                q += 1;
            }
            }
        if(q == word.size()){
            std::cout<<q << std::endl;
        }
        else {
            if (ind1 != 0 and inde0 != 0) {
                std::cout << abs(inde0 - ind1) + 1 << std:: endl;
            }
            else{
                if(word.size() == 1){
                    std::cout<< "1" << std::endl;
                }
                else{
                    if(ind1l != 0 and inde0 == 0){
                        std::cout<< word.size() - ind1l<< std::endl;
                    }
                    else {
                        if(inde0l != 0){
                            std::cout<< inde0 + 1 <<std:: endl;
                        }
                        else {
                            if (ind1l == 0 and inde0 == 0) {
                                std::cout << word.size() - ind1 << std::endl;
                            } else {
                                std::cout << inde0 + 1 << std::endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

