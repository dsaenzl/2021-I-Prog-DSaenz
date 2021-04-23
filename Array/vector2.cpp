#include <iostream>
#include <vector>
#include <numeric>

void inic(std::vector<int> &a);
void print(const std::vector<int> &a);

int main(void){
    const int N =10;
    std::vector<int> vec;
    vec.resize(N);
    inic(vec);
    print(vec);
    int s = std::accumulate(vec.begin(),vec.end(),0);
    std::cout << s/vec.size() << std::endl;
    return 0;
}
void inic(std::vector<int> &a){
    int ii=0;
    for(auto &x :a){
        x=ii*2+1;
        ii++;
    }
}
void print(const std::vector<int> &a){
    for(auto x : a){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}