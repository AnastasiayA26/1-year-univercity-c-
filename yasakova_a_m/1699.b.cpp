#include<iostream>

int main(){
    int n,m,t,i,j;
    std::cin>>t;
    while(t > 0){
        t -= 1;
        std::cin>>n>>m;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                std::cout<<((i%4<2)!=(j%4<2)?"1":"0")<< " ";
            }
            std::cout<<std::endl;
        }
    }
}
