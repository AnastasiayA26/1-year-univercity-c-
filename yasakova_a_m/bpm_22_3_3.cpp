#include <iostream>
#include <string>

int main(){
    std::string words;
    std::cin>> words;
    bool flag = false;
    for(int i = 0; i <= words.size() - 2; i += 1){
       if(words[i] != words[i + 1] and words[i] != words[i + 2] and words[i + 2] != words[i + 1]){
           char a = words[i];
           char b = words[i + 1];
           char c = words[i + 2];
           if(a != '.' and b != '.' and c != '.' ){
               std::cout<<"YES" << std::endl;
               flag = true;
               break;
           }
       }
    }
    if(not flag){
        std::cout<<"NO" << std::endl;
    }
    return 0;
}
